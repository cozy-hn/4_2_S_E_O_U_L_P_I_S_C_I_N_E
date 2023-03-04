
#include <unistd.h>

void	ft_putchar(char c);

void	writeline(int x, char c1, char c2, char c3)
{
	ft_putchar(c1);
	if (x == 1)
	{
		ft_putchar('\n');
		return ;
	}
	while (--x != 1)
		ft_putchar(c2);
	ft_putchar(c3);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	writeline(x, '/', '*', '\\');
	if (y == 1)
		return ;
	while (--y != 1)
		writeline(x, '*', ' ', '*');
	writeline(x, '\\', '*', '/');
}
