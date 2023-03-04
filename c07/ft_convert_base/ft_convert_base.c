
long long	ft_strlen(char *str)
{
	long long	n;

	n = 0;
	while (*str)
	{
		n++;
		str++;
	}
	return (n);
}

long long	is_checked(char *base)
{
	long long	i;
	long long	j;

	i = 0;
	if (ft_strlen(base) == 1 || *base == '\0')
		return (1);
	while (*(base + i))
	{
		j = 0;
		if (*(base + i) == '+' || *(base + i) == '-' || *(base + i) == 32
			|| (*(base + i) >= 9 && *(base + i) <= 13))
			return (1);
		while (*(base + i + j))
		{
			j++;
			if (*(base + i) == *(base + i + j))
				return (1);
		}
		i++;
	}
	return (0);
}

long long	is_base(char *str, char *base)
{
	long long	i;

	i = 0;
	while (*(base + i))
	{
		if (*str == *(base + i))
			return (i + 1);
		i++;
	}
	return (0);
}

long long	makenum(char *str, char *base)
{
	long long	num;

	num = 0;
	while (is_base(str, base))
	{
		num += (is_base(str, base) - 1);
		num *= ft_strlen(base);
		str++;
	}
	num /= ft_strlen(base);
	return (num);
}

long long	ft_atoi_base(char *str, char *base)
{
	long long	numminus;
	long long	num;

	if (is_checked(base))
		return (0);
	numminus = 0;
	num = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			numminus++;
		str++;
	}
	if (!(is_base(str, base)))
		return (0);
	if (numminus % 2)
		return (-1 * makenum(str, base));
	else
		return (makenum(str, base));
}
