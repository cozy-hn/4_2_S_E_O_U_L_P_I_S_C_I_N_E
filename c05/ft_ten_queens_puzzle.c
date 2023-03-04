
#include <unistd.h>

int	filter(int idx, char *a)
{
	int	j;

	j = -1;
	while (++j < idx)
	{
		if (a[j] == a[idx] || a[idx] - a[j] == idx - j
			|| a[idx] - a[j] == j - idx)
			return (0);
	}
	return (1);
}

void	dfs(int idx, int *n, char *a)
{
	int	j;

	j = -1;
	if (filter(idx - 1, a))
	{
		if (idx == 10)
		{
			write(1, a, 10);
			write(1, "\n ", 1);
			*n += 1;
		}
		else
		{
			while (++j <= 9)
			{
				a[idx] = j + '0';
				dfs(idx + 1, n, a);
			}
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int		n;
	char	a[10];

	dfs(0, &n, a);
	return (n);
}
