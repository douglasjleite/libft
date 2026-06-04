/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djesus-l <djesus-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 13:12:21 by djesus-l          #+#    #+#             */
/*   Updated: 2026/06/04 13:12:43 by djesus-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_string;
	size_t	s_length;
	size_t	i;

	if (!s)
		return (NULL);
	s_length = ft_strlen(s);
	if (start >= s_length)
		return (ft_strdup(""));
	if (len > (s_length - start))
		len = s_length - start;
	sub_string = malloc((len + 1) * sizeof(char));
	if (!sub_string)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		sub_string[i] = s[start + i];
		i++;
	}
	sub_string[i] = '\0';
	return (sub_string);
}
