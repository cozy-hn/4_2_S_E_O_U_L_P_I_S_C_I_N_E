
#include <stdlib.h>

int	len_size(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*cp;
	char	*tmp;

	cp = malloc(len_size(src) + 1);
	tmp = cp;
	if (tmp != NULL)
	{
		while (*src)
			*tmp++ = *src++;
		*tmp = '\0';
		return (cp);
	}
	return (0);
}
