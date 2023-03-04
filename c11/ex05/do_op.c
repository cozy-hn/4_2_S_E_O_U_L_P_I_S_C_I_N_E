
#include <unistd.h>

int	add(int n, int m);
int	sub(int n, int m);
int	mul(int n, int m);
int	div(int n, int m);
int	mod(int n, int m);

int	ft_atoi(char *str)
{
	long long	numminus;
	long long	num;

	numminus = 1;
	num = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			numminus *= -1;
		str++;
	}
	if (!(*str >= '0' && *str <= '9'))
		return (0);
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return ((int)(numminus * num));
}

int	check_op(char *op, char *is_zero)
{
	if (!(*op == '+' || *op == '-' || *op == '*' || \
	*op == '/' || *op == '%') || op[1])
	{
		write(1, "0\n", 2);
		return (0);
	}
	if (*op == '/' && ft_atoi(is_zero) == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	if (*op == '%' && ft_atoi(is_zero) == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	return (1);
}

void	putnbr(long long n)
{
	char	c;

	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n >= 10)
		putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	(*fp[5])(int n, int m);

	fp[0] = add;
	fp[1] = sub;
	fp[2] = mul;
	fp[3] = div;
	fp[4] = mod;
	if (ac == 4 && check_op(av[2], av[3]))
	{
		if (*av[2] == '+')
			putnbr((long long)fp[0](ft_atoi(av[1]), ft_atoi(av[3])));
		else if (*av[2] == '-')
			putnbr((long long)fp[1](ft_atoi(av[1]), ft_atoi(av[3])));
		else if (*av[2] == '*')
			putnbr((long long)fp[2](ft_atoi(av[1]), ft_atoi(av[3])));
		else if (*av[2] == '/')
			putnbr((long long)fp[3](ft_atoi(av[1]), ft_atoi(av[3])));
		else
			putnbr((long long)fp[4](ft_atoi(av[1]), ft_atoi(av[3])));
	}
	else
		return (0);
	write(1, "\n", 1);
	return (0);
}
