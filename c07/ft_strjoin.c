
#include <stdlib.h>

int	str_len(char *str)
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

int	make_len_sum(int size, char **strs)
{
	int	idx;
	int	len_sum;

	idx = 0;
	len_sum = 0;
	while (size - idx)
	{
		len_sum += str_len(strs[idx]);
		idx++;
	}
	return (len_sum);
}

void	str_cat(char *be_return, char*src)
{
	while (*be_return)
		be_return++;
	while (*src)
		*be_return++ = *src++;
	*be_return = '\0';
}

void	set_arr(char *be_return, int size)
{
	int	i;

	i = -1;
	while (++i <= size - 1)
		be_return[i] = 0;
	be_return[size] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*be_return;
	int		len_sum;
	int		idx;

	if (!size)
	{	
		be_return = malloc(1);
		*be_return = 0;
		return (be_return);
	}
	len_sum = make_len_sum(size, strs);
	be_return = malloc(len_sum + (size - 1) * str_len(sep) + 1);
	if (!be_return)
		return (NULL);
	set_arr(be_return, len_sum + (size - 1) * str_len(sep));
	idx = 0;
	while (size - idx)
	{
		str_cat(be_return, strs[idx]);
		if (size - idx > 1)
			str_cat(be_return, sep);
		idx++;
	}
	return (be_return);
}
