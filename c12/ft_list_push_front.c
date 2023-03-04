
#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*happy;

	happy = malloc(sizeof(t_list));
	happy->data = data;
	happy->next = *begin_list;
}
