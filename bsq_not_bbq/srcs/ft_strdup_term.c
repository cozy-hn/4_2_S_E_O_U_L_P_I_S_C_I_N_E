
#include <stdlib.h>

int		ft_strlen_term(char *str, char *charset);
char	*ft_strcpy_term(char *dest, char *src, char *charset);

char	*ft_strdup_term(char *src, char *charset)
{
	char	*dest;

	dest = (char *)malloc(sizeof(char) * (ft_strlen_term(src, charset) + 1));
	return (ft_strcpy_term(dest, src, charset));
}
