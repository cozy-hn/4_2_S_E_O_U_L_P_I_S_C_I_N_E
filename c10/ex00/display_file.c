/*it's worng*/
#include <unistd.h>
#include <fcntl.h>
#define BUF_MAX 50000

int	main(int ac, char **av)
{
	int		fd;
	int		num;
	char	buf[BUF_MAX];

	if (ac == 1)
		write(2, "File name missing.\n", 19);
	else if (ac != 2)
		write(2, "Too many arguments.\n", 20);
	else
	{
		fd = open(av[1], O_RDONLY);
		if (fd == -1)
		{
			write(2, "Cannot read file.\n", 18);
			return (0);
		}
		num = read(fd, buf, BUF_MAX);
		buf[num] = '\0';
		write(1, buf, num);
		close (fd);
	}
	return (0);
}
