
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int			*n;
	int			i;
	long long	size;

	size = (long long)max - (long long)min;
	if (min < max)
	{
		i = 0;
		n = malloc(sizeof(int) * size);
		while (min + i < max)
		{
			n[i] = min + i;
			i++;
		}
		return (n);
	}
	return (NULL);
}
