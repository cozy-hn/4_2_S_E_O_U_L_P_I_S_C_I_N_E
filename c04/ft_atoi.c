
int	makenum(char *str)
{
	int	num;

	num = 0;
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (num);
}

int	ft_atoi(char *str)
{
	int	numminus;

	numminus = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			numminus++;
		str++;
	}
	if (!(*str >= '0' && *str <= '9'))
		return (0);
	if (numminus % 2)
		return (-1 * makenum(str));
	else
		return (makenum(str));
}
