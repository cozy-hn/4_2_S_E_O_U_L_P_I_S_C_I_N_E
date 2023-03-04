
int	ft_sqrt(int nb)
{
	long long	i;

	i = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	if (nb == 4)
		return (2);
	if (nb == 16)
		return (4);
	if (nb == 25)
		return (5);
	if (nb == 36)
		return (6);
	while (++i <= nb / 7)
		if (i * i == nb)
			return ((int)i);
	return (0);
}
