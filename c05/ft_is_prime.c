
int	ft_is_prime(int nb)
{
	long long	i;
	long long	j;
	long long	n;

	i = 1;
	j = 3;
	n = (long long)nb;
	if (n <= 1)
		return (0);
	if (n == 2 || n == 3 || n == 5 || n == 7)
		return (1);
	if (!(n % 2) || !(n % 3) || !(n % 5) || !(n % 7))
		return (0);
	while (i * i <= n)
		i++;
	while (j < i)
	{
		if (!(n % j))
			return (0);
		j += 2;
	}
	return (1);
}
