
#include <unistd.h>

void	setarray(char *a, int n)
{
	int	i;
	int	j;

	i = -1;
	j = -1;
	a[11] = ' ';
	a[10] = ',';
	while (++j < 10 - n)
	{
		a[j] = '\0';
	}
	while (++i < n)
	{
		a[10 - n + i] = '0' + i;
	}
}

void	checkisnine(char *a)
{
	int	i;
	int	isnine;
	int	checkaside;

	i = 0;
	isnine = 0;
	checkaside = 9;
	if (a[9] == ':')
	{
		a[9]--;
		while ((a[checkaside] - a[checkaside - 1]) == 1)
			checkaside--;
		a[checkaside - 1]++;
		while (checkaside != 10)
		{
			a[checkaside] = a[checkaside - 1] + 1;
			checkaside++;
		}
	}
}

void	ft_print_combn(int n)
{
	char	a[12];

	setarray(a, n);
	while (1)
	{
		write(1, a + 10 - n, n + 2);
		a[9]++;
		checkisnine(a);
		if (a[10 - n] == '0' + 10 - n)
		{
			write(1, a + 10 - n, n);
			break ;
		}
	}
}
