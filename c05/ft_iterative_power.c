
int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power < 0)
		return (0);
	while (power)
	{
		i *= nb;
		power--;
	}
	return (i);
}
