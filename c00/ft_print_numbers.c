
#include <unistd.h>

void	ft_print_numbers(void)
{
	char	n;

	n = '0' - 1;
	while (++n <= '9')
		write(1, &n, 1);
}
