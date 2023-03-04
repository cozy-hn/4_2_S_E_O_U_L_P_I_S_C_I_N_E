
int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (length--)
	{
		if ((*f)(tab[i]))
			j++;
		i++;
	}
	return (j);
}
