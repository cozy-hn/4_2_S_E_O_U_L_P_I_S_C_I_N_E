
#include <stdlib.h>

long long	ft_atoi_base(char *str, char *base);
long long	is_checked(char *base);
long long	ft_strlen(char *str);

void	cal_malloc_num(long long *nbr, long long *malloc_num, long long len)
{
	long long		tmp;

	tmp = *nbr;
	*malloc_num = 0;
	while (1)
	{
		tmp /= len;
		*malloc_num += 1;
		if (tmp == 0)
			break ;
	}
	if (*nbr < 0)
		(*malloc_num)++;
}

char	*ft_putnbr_base(long long nbr, char *base_to)
{
	char			*be_return;
	long long		i;
	long long		len;
	long long		malloc_num;

	len = ft_strlen(base_to);
	cal_malloc_num(&nbr, &malloc_num, len);
	be_return = malloc(malloc_num + 1);
	i = 0;
	if (nbr < 0)
	{
		be_return[0] = '-';
		nbr *= -1;
	}
	while (1)
	{
		be_return[malloc_num -1 - i] = base_to[nbr % len];
		nbr /= len;
		i++;
		if (nbr == 0)
			break ;
	}
	be_return[malloc_num] = '\0';
	return (be_return);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long long	n;
	char		*be_return;

	if (is_checked(base_from) || is_checked(base_to))
		return (NULL);
	n = ft_atoi_base(nbr, base_from);
	be_return = ft_putnbr_base(n, base_to);
	return (be_return);
}
