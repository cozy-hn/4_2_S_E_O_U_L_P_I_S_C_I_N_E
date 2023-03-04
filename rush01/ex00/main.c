
#include <unistd.h>

void	dfs(int i, int n[][4], int *m, int *k);
int		check_input_error(char **av);
void	up_down_left_right(char **av, int *n);
void	set_arry_zero(int num[][4]);

int	main(int ac, char **av)
{
	int	side[16];
	int	num[4][4];
	int	no_ans;

	no_ans = 1;
	if (ac == 2 && check_input_error(av))
	{
		up_down_left_right(av, side);
		set_arry_zero(num);
		dfs(0, num, side, &no_ans);
		if (no_ans)
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
