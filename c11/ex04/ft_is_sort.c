
int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	flag1;
	int	flag2;

	i = 0;
	flag1 = 0;
	flag2 = 0;
	if (length == 0 || length == 1 || length == 2)
		return (1);
	while (length > i + 1)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			flag1 = 1;
		if ((*f)(tab[i], tab[i + 1]) < 0)
			flag2 = 1;
		i++;
	}
	if (flag1 && flag2)
		return (0);
	return (1);
}
