
#include <unistd.h>

void	print_num(int n[][4])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = n[i][j] + '0';
			write(1, &c, 1);
			if (j != 3)
				write(1, " ", 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}

int	ischeckrow(int i, int n[][4], int *m)
{
	int	j[5];

	j[0] = 0;
	j[3] = 1;
	j[4] = 1;
	j[1] = n[i / 4][0];
	j[2] = n[i / 4][3];
	while (j[0] <= 3)
	{
		if (j[1] < n[i / 4][j[0]])
		{
			j[1] = n[i / 4][j[0]];
			j[3]++;
		}
		if (j[2] < n[i / 4][3 - j[0]])
		{
			j[2] = n[i / 4][3 - j[0]];
			j[4]++;
		}
		j[0]++;
	}
	if (j[3] == m[8 + i / 4] && j[4] == m[12 + i / 4])
		return (0);
	return (1);
}

int	ischeckcol(int i, int n[][4], int *m)
{
	int	j[5];

	j[0] = 0;
	j[3] = 1;
	j[4] = 1;
	j[1] = n[0][i % 4];
	j[2] = n[3][i % 4];
	while (j[0] <= 3)
	{
		if (j[1] < n[j[0]][i % 4])
		{
			j[1] = n[j[0]][i % 4];
			j[3]++;
		}
		if (j[2] < n[3 - j[0]][i % 4])
		{
			j[2] = n[3 - j[0]][i % 4];
			j[4]++;
		}
		j[0]++;
	}
	if (j[3] == m[0 + i % 4] && j[4] == m[4 + i % 4])
		return (0);
	return (1);
}

int	isok(int i, int n[][4], int *m)
{
	int	j;

	j = -1;
	while (++j < i % 4)
		if (n[i / 4][j] == n[i / 4][i % 4])
			return (0);
	j = -1;
	while (++j < i / 4)
		if (n[j][i % 4] == n[i / 4][i % 4])
			return (0);
	if (i % 4 == 3)
		if (ischeckrow(i, n, m))
			return (0);
	if (i >= 12)
		if (ischeckcol(i, n, m))
			return (0);
	return (1);
}
