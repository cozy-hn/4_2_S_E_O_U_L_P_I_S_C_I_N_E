/*it's worng*/
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#define BUF_MAX 50000

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(2, str, 1);
		str++;
	}
}

void	no_file(char *filename)
{
	write(2, "cat: ", 5);
	ft_putstr(filename);
	write(2, ": ", 2);
	ft_putstr(strerror(errno));
	write(2, "\n", 1);
}

void	open_stdinput(char *buf, int *num)
{
	*num = read(0, buf, BUF_MAX);
	while (*num)
	{
		buf[*num - 1] = '\0';
		write(1, buf, *num);
		write(1, "\n", 1);
		*num = read(0, buf, BUF_MAX);
	}
}

int	main(int ac, char **av)
{
	char	buf[BUF_MAX];
	int		i;
	int		fd;
	int		num;

	i = 0;
	if (ac == 1)
		open_stdinput(buf, &num);
	else
	{
		while (ac > ++i)
		{
			fd = open(av[i], O_RDONLY);
			if (fd == -1)
			{
				no_file(av[i]);
				continue ;
			}
			num = read(fd, buf, BUF_MAX);
			buf[num] = '\0';
			write(1, buf, num);
			close (fd);
		}
	}
	return (0);
}
