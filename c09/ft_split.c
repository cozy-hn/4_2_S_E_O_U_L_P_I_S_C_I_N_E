
#include <stdlib.h>

int	is_deli(char c, char	*charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

void	check_word(char	*str, char	*charset, int *num_word)
{
	while (*str)
	{
		while (is_deli(*str, charset) && *str)
			str++;
		if (*str)
			(*num_word)++;
		while (*str)
		{
			if (is_deli(*str, charset))
				break ;
			str++;
		}
	}
}

void	set_size_word(char	*str, char	*charset, int	*size_word)
{
	*size_word = 0;
	while (*str)
	{
		(*size_word)++;
		str++;
		if (is_deli(*str, charset))
			break ;
	}
}

void	ncpy(char	*dest, char	*src, int size)
{
	while (size--)
		*dest++ = *src++;
	*dest = '\0';
}

char	**ft_split(char *str, char *charset)
{
	char	**be_return;
	int		num_word;
	int		size_word;
	int		i;

	i = 0;
	num_word = 0;
	check_word(str, charset, &num_word);
	be_return = malloc(sizeof(char *) * (num_word + 1));
	be_return[num_word] = NULL;
	while (*str)
	{
		if (!is_deli(*str, charset))
		{
			set_size_word(str, charset, &size_word);
			be_return[i] = malloc(size_word + 1);
			ncpy(be_return[i], str, size_word);
			i++;
			str += size_word;
		}
		else
			str++;
	}
	return (be_return);
}
