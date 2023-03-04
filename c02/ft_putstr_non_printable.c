
#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char			c;
	unsigned char	u;

	while (*str)
	{
		u = *str;
		if (!(u >= 32 && u <= 126))
		{	
			write (1, "\\", 1);
			if ((u / 16) > 9)
				c = (u / 16) - 10 + 'a';
			else
				c = (u / 16) + '0';
			write(1, &c, 1);
			if ((u % 16) > 9)
				c = (u % 16) - 10 + 'a';
			else
				c = (u % 16) + '0';
			write(1, &c, 1);
			str++;
			continue ;
		}
		write (1, str, 1);
		str++;
	}
}
