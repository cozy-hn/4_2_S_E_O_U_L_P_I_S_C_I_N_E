
int	ft_strlen(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		ac;
	int		i;
	char	*tmp;

	ac = ft_strlen(tab);
	while (ac > 1)
	{
		i = -1;
		while (++i <= ac - 2)
		{
			if ((*cmp)(tab[i], tab[i + 1]) > 0)
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
		}
		ac--;
	}
}
