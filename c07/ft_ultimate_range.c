
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	long long	size;
	int			*n;

	size = (long long)max - (long long)min;
	if (size > 0)
	{
		n = malloc(sizeof(int) * size);
		if (!n)
			return (-1);
		*range = n;
		while (min < max)
			*n++ = min++;
		return (size);
	}
	return (0);
}
