
#include <unistd.h>

void	reset_a(char *a)
{
	a[0] = '0';
	a[1] = '0';
	a[2] = ' ';
	a[3] = '0';
	a[4] = '1';
	a[5] = ',';
	a[6] = ' ';
}

int	checkend(char *a)
{
	if (a[0] == '9' && a[1] == '8')
	{
		write(1, a, 5);
		return (1);
	}
	return (0);
}

void	checkisanine(char *a)
{
	if (a[1] == '9')
	{
		a[0]++;
		a[1] = '0';
		a[3] = a[0];
		a[4] = '1';
	}
	else if (a[1] == '8')
	{
		a[1]++;
		a[4] = '0';
		a[3] = a[0] + 1;
	}
	else
	{
		a[1]++;
		a[4] = a[1] + 1;
		a[3] = a[0];
	}
}

void	ft_print_comb2(void)
{
	char	a[7];

	reset_a(a);
	while (1)
	{
		write(1, a, 7);
		if (a[3] == '9' && a[4] == '9')
		{
			checkisanine(a);
		}
		else
		{
			if (a[4] == '9')
			{
				a[3]++;
				a[4] = '0';
			}
			else
				a[4]++;
		}
		if (checkend(a))
			break ;
	}
}
