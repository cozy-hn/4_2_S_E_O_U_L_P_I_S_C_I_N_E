
char	*ft_strcpy(char *dest, char *src)
{
	char	*tmp;

	tmp = dest;
	while (*src)
		*(tmp++) = *(src++);
	*tmp = '\0';
	return (dest);
}
