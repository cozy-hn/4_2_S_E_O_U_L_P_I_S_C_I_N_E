
int	min_tri(long long a, long long b, long long c)
{
	if (a <= b && a <= c)
		return (a);
	if (b <= a && b <= c)
		return (b);
	return (c);
}

int	min_dou(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

int	max_dou(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}
