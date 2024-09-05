/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwon <cwon@student.42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 18:43:22 by cwon              #+#    #+#             */
/*   Updated: 2024/09/05 20:51:27 by cwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_d;
	unsigned char	*ptr_s;
	size_t			i;

	ptr_d = (unsigned char *)dest;
	ptr_s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		ptr_d[i] = ptr_s[i];
		i++;
	}
	return (dest);
}
