
void	print_num(int n[][4]);
int		isok(int i, int n[][4], int *m);

void	dfs(int i, int n[][4], int *m, int *k)
{
	int	j;

	j = 0;
	if (isok(i - 1, n, m))
	{
		if (i == 16)
		{
			print_num(n);
			*k = 0;
			return ;
		}
		else
		{
			while (++j <= 4)
			{
				n[i / 4][i % 4] = j;
				if (*k)
					dfs (i + 1, n, m, k);
			}
		}
	}
}

int	check_input_error(char **av)
{
	int	i;

	i = 0;
	while (*(av[1] + i))
	{
		if (i % 2)
		{
			if (*(av[1] + i) != ' ')
				return (0);
		}
		else
		{
			if (!(*(av[1] + i) >= '1' && *(av[1] + i) <= '4'))
				return (0);
		}
		if (i > 30)
			return (0);
		i++;
	}
	return (1);
}

void	up_down_left_right(char **av, int *n)
{
	int	i;

	i = 0;
	while (*(av[1] + i))
	{
		if (*(av[1] + i) != ' ')
		{
			*n = *(av[1] + i) - '0';
			n++;
		}
		i++;
	}
}

void	set_arry_zero(int num[][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			num[i][j] = 0;
			j++;
		}
		i++;
	}
}
