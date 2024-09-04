/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwon <cwon@student.42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:28:38 by cwon              #+#    #+#             */
/*   Updated: 2024/09/03 19:43:42 by cwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (src_len <= size)
		ft_memcpy(dst, src, src_len + 1);
	else if (size--)
	{
		ft_memcpy(dst, src, size);
		dst[size] = 0;
	}
	return (src_len);
}
