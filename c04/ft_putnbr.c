
#include <unistd.h>

int	isdigit(int n)
{
	int	cnt;

	cnt = 0;
	while (n != 0)
	{
		n /= 10;
		cnt++;
	}
	return (cnt);
}

int	isnegative(int n)
{
	if (n < 0)
	{
		write(1, "-", 1);
		return (-n);
	}
	return (n);
}

int	makenum(int n)
{
	int	num;

	num = 1;
	while (--n != 0)
		num *= 10;
	return (num);
}

int	isoverflow(int n)
{
	if (n == -2147483648)
		return (1);
	else
		return (0);
}

void	ft_putnbr(int nb)
{
	int		a;
	int		b;
	int		checkoverflow;
	char	c;

	checkoverflow = isoverflow(nb);
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (checkoverflow)
		nb += 1;
	nb = isnegative(nb);
	a = isdigit(nb);
	b = makenum(a);
	while (b != 0)
	{	
		c = '0' + nb / b;
		nb -= (nb / b) * b;
		write(1, &c, 1);
		b /= 10;
		if (checkoverflow && b == 1)
			nb += 1;
	}
}
