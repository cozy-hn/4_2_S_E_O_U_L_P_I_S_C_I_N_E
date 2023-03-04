

unsigned int	lenstr(char *str)
{
	unsigned int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (lenstr(src));
	if (*src == '\0')
	{
		*dest = '\0';
		return (0);
	}
	while (++i <= size - 1)
		*(dest + i - 1) = *(src + i - 1);
	*(dest + size -1) = '\0';
	return (lenstr(src));
}
