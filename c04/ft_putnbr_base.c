
#include <unistd.h>

long long	ft_strlen(char *str)
{
	long long	n;

	n = 0;
	while (*str)
	{
		n++;
		str++;
	}
	return (n);
}

long long	isminus(long long nbr)
{
	long long	n;

	n = nbr;
	if (n < 0)
	{
		write(1, "-", 1);
		n = n * (-1);
	}
	return (n);
}

int	is_checked(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) == 1 || *base == '\0')
		return (1);
	while (*(base + i))
	{
		j = 0;
		if (*(base + i) == '+' || *(base + i) == '-')
			return (1);
		while (*(base + i + j))
		{
			j++;
			if (*(base + i) == *(base + i + j))
				return (1);
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char			a[32];
	long long		i;
	long long		len;
	long long		n;

	i = 0;
	len = ft_strlen(base);
	if (is_checked(base))
		return ;
	n = isminus((long long)nbr);
	while (++i <= 32)
	{
		a[32 - i] = base[n % len];
		n /= len;
		if (n == 0)
			break ;
	}
	write(1, a + 32 - i, i);
}
