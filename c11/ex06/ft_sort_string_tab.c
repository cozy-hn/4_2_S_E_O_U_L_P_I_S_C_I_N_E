
int	ft_strlen(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	if ((unsigned char)*s1 > (unsigned char)*s2)
		return (1);
	return (0);
}

void	ft_sort_string_tab(char **tab)
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
			if (ft_strcmp(tab[i], tab[i + 1]))
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
		}
		ac--;
	}
}
