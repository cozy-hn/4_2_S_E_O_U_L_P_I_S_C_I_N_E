
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*ans;

	ans = malloc(sizeof(t_list));
	ans->data = data;
	ans->next = (void *)0;

	return (ans);
}
