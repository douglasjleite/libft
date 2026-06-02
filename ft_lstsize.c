#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*curr;

	count = 0;
	curr = lst;
	while (curr)
	{
		count++;
		curr = curr->next;
	}
	return (count);
}
