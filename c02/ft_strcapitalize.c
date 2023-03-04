
int	isdeli(char *tmp)
{
	if ((*tmp >= 'a' && *tmp <= 'z') || (*tmp >= 'A' && *tmp <= 'Z'))
		return (0);
	if (*tmp >= '0' && *tmp <= '9')
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	char	*tmp;

	tmp = str;
	if (*tmp >= 'a' && *tmp <= 'z')
		*tmp -= ('a' - 'A');
	if (isdeli(tmp) && (*(tmp + 1) >= 'a' && *(tmp + 1) <= 'z'))
		*(tmp + 1) -= ('a' - 'A');
	tmp++;
	while (*(tmp))
	{
		if (*tmp >= 'A' && *tmp <= 'Z' && !(isdeli(tmp - 1)))
			*tmp += ('a' - 'A');
		if (isdeli(tmp) && (*(tmp + 1) >= 'a' && *(tmp + 1) <= 'z'))
		{
			tmp++;
			*tmp -= ('a' - 'A');
		}
		if (*tmp == '\0')
			break ;
		tmp++;
	}
	return (str);
}
