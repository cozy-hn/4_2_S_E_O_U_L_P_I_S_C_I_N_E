
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*tmp;

	tmp = dest;
	while (n--)
	{
		if (*src)
			*(tmp++) = *(src++);
		else
			*(tmp++) = '\0';
	}
	return (dest);
}
