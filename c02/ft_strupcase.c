
char	*ft_strupcase(char *str)
{
	char	*tmp;

	tmp = str;
	while (*tmp)
	{
		if (*tmp >= 'a' && *tmp <= 'z')
			*tmp -= ('a' - 'A');
		tmp++;
	}
	return (str);
}
