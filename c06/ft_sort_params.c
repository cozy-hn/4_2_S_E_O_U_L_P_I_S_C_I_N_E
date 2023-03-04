
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 > *s2)
		return (1);
	return (0);
}

void	ft_print_para(int tmp, char **av)
{
	int	i;

	i = 1;
	while (tmp != 1)
	{
		while (*av[i])
		{
			write(1, av[i], 1);
			av[i]++;
		}
		i++;
		tmp--;
		write(1, "\n", 1);
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	tmp;

	tmp = ac;
	while (ac > 2)
	{
		i = 0;
		while (++i <= ac - 2)
		{
			if (ft_strcmp(av[i], av[i + 1]))
			{
				av[0] = av[i];
				av[i] = av[i + 1];
				av[i + 1] = av[0];
			}
		}
		ac--;
	}
	ft_print_para(tmp, av);
	return (0);
}
