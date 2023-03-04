
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*output;
	int	*tmp;

	output = malloc(sizeof(int) * length);
	tmp = output;
	while (length--)
		*tmp++ = (*f)(*tab++);
	return (output);
}
