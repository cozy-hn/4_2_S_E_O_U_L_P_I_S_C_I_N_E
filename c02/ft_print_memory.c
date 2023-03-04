
#include <unistd.h>

void	dectohex(unsigned long long num)
{
	char	hex[16];
	int		i;

	i = 0;
	while (++i <= 16)
	{
		hex[16 - i] = "0123456789abcdef"[num % 16];
		num /= 16;
		if (num == 0)
			break ;
	}
	while (++i <= 16)
		hex[16 - i] = '0';
	write(1, hex, 16);
	write(1, ": ", 2);
}

void	chartohex1(unsigned long long num)
{
	unsigned char	*str;
	unsigned int	i;

	i = 0;
	str = (unsigned char *)num;
	while (++i <= 24)
	{
		if (!(i % 3))
			write(1, " ", 1);
		else
		{
			write(1, &"0123456789abcdef"[*str / 16], 1);
			write(1, &"0123456789abcdef"[*str % 16], 1);
			str++;
		}
	}	
}

void	chartohex2(unsigned long long num, unsigned int size)
{
	unsigned char	*str;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	str = (unsigned char *)num;
	while (++i <= 24)
	{
		if (!(i % 3))
			write(1, " ", 1);
		else if (++j <= size)
		{
			write(1, &"0123456789abcdef"[*str / 16], 1);
			write(1, &"0123456789abcdef"[*str % 16], 1);
			str++;
		}
		else
			write(1, "  ", 2);
	}	
}

void	printstr(unsigned long long num, unsigned int size)
{
	unsigned char	*str;
	unsigned int	i;

	i = 0;
	str = (unsigned char *)num;
	while (++i <= 16)
	{
		if (!(*str >= 32 && *str <= 126))
			write(1, ".", 1);
		else
			write(1, str, 1);
		if (i == size)
			break ;
		str++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned long long	num;

	num = (unsigned long long)addr;
	while (size)
	{
		if (size > 16)
		{
			dectohex(num);
			chartohex1(num);
			printstr(num, size);
			write(1, "\n", 1);
		}
		else
		{
			dectohex(num);
			chartohex2(num, size);
			printstr(num, size);
			write(1, "\n", 1);
			break ;
		}
		size -= 16;
		num += 16;
	}
	return (addr);
}
