
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;

	i = 0;
	while (*(dest + i))
		i++;
	while (nb-- && *src)
	{
		*(dest + i) = *(src++);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
