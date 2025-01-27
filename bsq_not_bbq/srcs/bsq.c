
#include "../includes/bsq.h"

void	solve(char *file_name)
{
	t_pos		max_pos;
	char		*marks;
	long long	row_num;

	marks = NULL;
	get_map_info(file_name, &marks, &row_num);
	if (marks == NULL || row_num == 0)
		return ;
	max_pos = find_max_pos(file_name, marks, row_num);
	if (!is_error_pos(max_pos))
		print_max_square(file_name, max_pos, marks[2]);
	free(marks);
	printf("MAX: %lld / (%lld, %d)\n", max_pos.value, max_pos.y, max_pos.x);
	printf("col cnt : %d\n", get_line_size(file_name));
}

void	open_std_input(void)
{
	int		fd;
	char	buffer[BUFFER_SIZE];
	int		bytes;

	fd = open(STDIN_SAVE, O_WRONLY | O_CREAT | O_TRUNC, 0777);
	bytes = read(0, buffer, BUFFER_SIZE);
	write(fd, buffer, bytes);
	while (bytes)
	{
		bytes = read(0, buffer, BUFFER_SIZE);
		write(fd, buffer, bytes);
	}
	close (fd);
	fd = open(STDIN_SAVE, O_RDONLY);
	if (fd == -1)
		map_error();
	solve(STDIN_SAVE);
	close (fd);
}

int	main(int argc, char *argv[])
{
	int		fd;
	int		i;

	if (argc == 1)
	{
		open_std_input();
		system("leaks bsq");
		exit(1);
	}
	i = 0;
	while (++i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
		{
			not_existing_map();
			continue ;
		}
		close (fd);
		solve(argv[i]);
	}
	system("leaks bsq");
	exit(1);
	return (0);
}
