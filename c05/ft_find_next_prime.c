
int	ft_prime(int nb)
{
	long long	i;
	long long	j;
	long long	n;

	i = 1;
	j = 3;
	n = (long long)nb;
	if (n == 3 || n == 5 || n == 7 || n == 11)
		return (1);
	if (!(n % 3) || !(n % 5) || !(n % 7) || !(n % 11))
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

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (!(nb % 2))
		nb++;
	while (!(ft_prime(nb)))
		nb += 2;
	return (nb);
}
