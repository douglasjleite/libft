#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*curr;
	t_list	*next_node;

	if (!lst || !del)
		return ;
	curr = *lst;
	while (curr)
	{
		next_node = curr->next;
		ft_lstdelone(curr, del);
		curr = next_node;
	}
	*lst = NULL;
}
