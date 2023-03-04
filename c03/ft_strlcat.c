
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	lendest;
	unsigned int	lensrc;

	i = 0;
	lendest = lenstr(dest);
	lensrc = lenstr(src);
	while ((size > lendest + i + 1) && *(src + i))
	{
		*(dest + lendest + i) = *(src + i);
		i++;
	}
	*(dest + lendest + i) = '\0';
	if (size <= lenstr(dest))
		return (lensrc + size);
	else
		return (lendest + lensrc);
}
