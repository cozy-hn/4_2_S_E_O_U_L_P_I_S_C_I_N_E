
#include <unistd.h>

int	main(int ac, char **av)
{
	(void)ac;
	while (*av[0])
	{
		write(1, av[0], 1);
		av[0]++;
	}
	write(1, "\n", 1);
	return (0);
}
