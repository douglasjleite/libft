/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djesus-l <djesus-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 11:45:40 by djesus-l          #+#    #+#             */
/*   Updated: 2026/06/04 11:45:42 by djesus-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*allocated_memory;

	total_size = count * size;
	if (count > 0 && total_size / count != size)
		return (NULL);
	allocated_memory = malloc(total_size);
	if (!allocated_memory)
		return (NULL);
	ft_bzero(allocated_memory, total_size);
	return (allocated_memory);
}
