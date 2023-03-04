
#include <unistd.h>

int	ft_strlen(char *str);

void	ft_puterr(char *str)
{
	write(2, str, ft_strlen(str));
}
