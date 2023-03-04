
#include <unistd.h>

void	rush(int x, int y);

int	setv(char *av)
{
	long	x;

	x = 0;
	while (*av)
	{
		if (*av == '+')
			*av = '0';
		x += *av - '0';
		av++;
		x *= 10;
	}
	x /= 10;
	return ((int)x);
}

int	isposint(char *av)
{	
	unsigned long long	x;

	x = 0;
	if (*av == '+')
		av++;
	while (*av)
	{
		if (*av >= '0' && *av <= '9')
		{
			x += *av - '0';
			if (x > 2147483647)
				return (0);
			av++;
			x *= 10;
		}
		else
			return (0);
	}
	return (1);
}

int	main(int ac, char **av)
{
	int	x;
	int	y;

	if (ac == 3 && isposint(av[1]) && isposint(av[2]))
	{
		x = setv(av[1]);
		y = setv(av[2]);
		if (x > 0 && y > 0)
			rush(x, y);
		else
			write(1, "error!\n", 7);
		return (0);
	}
	write(1, "error!\n", 7);
	return (0);
}
