
char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!(*to_find))
		return (str);
	while (*(str + i))
	{
		while (*(str + i + j) == *(to_find + j))
		{
			j++;
			if (!(*(to_find + j)))
				return (str + i);
		}
		j = 0;
		i++;
	}
	return (0);
}
