
void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;
	int	j;

	if (size % 2)
		j = (size - 1) / 2;
	else
		j = size / 2;
	i = 0;
	while (++i <= j)
	{
		tmp = tab[i - 1];
		tab[i - 1] = tab[size - i];
		tab[size - i] = tmp;
	}
}
