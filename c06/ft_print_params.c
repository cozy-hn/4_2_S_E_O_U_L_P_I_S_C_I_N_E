
#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	while (ac != 1)
	{
		while (*av[i])
		{
			write(1, av[i], 1);
			av[i]++;
		}
		i++;
		ac--;
		write(1, "\n", 1);
	}
	return (0);
}
