/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwon <cwon@student.42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 23:25:26 by cwon              #+#    #+#             */
/*   Updated: 2024/09/03 23:29:36 by cwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr_1;
	unsigned char	*ptr_2;

	i = 0;
	ptr_1 = (unsigned char *)s1;
	ptr_2 = (unsigned char *)s2;
	while (i < n && ptr_1[i] && ptr_2[i])
	{
		if (ptr_1[i] != ptr_2[i])
			return ((int)(ptr_1[i] - ptr_2[i]));
		i++;
	}
	if (i == n)
		return (0);
	return ((int)(ptr_1[i] - ptr_2[i]));
}
