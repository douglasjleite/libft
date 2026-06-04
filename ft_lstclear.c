/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djesus-l <djesus-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 11:54:44 by djesus-l          #+#    #+#             */
/*   Updated: 2026/06/04 11:54:47 by djesus-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
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
