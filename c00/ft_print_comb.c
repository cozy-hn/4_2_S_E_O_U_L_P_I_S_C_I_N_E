
#include <unistd.h>

void	ft_print(char i, char j, char k)
{
	i += 48;
	j += 48;
	k += 48;
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &k, 1);
	if (i != 55)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = 0;
	while (i < 8)
	{
		j = i + 1;
		while (j < 9)
		{	
			k = j + 1;
			while (k < 10)
			{
				ft_print(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
