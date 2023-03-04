
#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int	i;

	if (begin_list == (void *)0)
		return (0);
	i = 1;
	while (begin_list->next == (void *)0)
	{
		i++;
		begin_list->next = begin_list->next->next;
	}
	return (i);
}
