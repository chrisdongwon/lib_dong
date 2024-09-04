/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwon <cwon@student.42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 18:58:07 by cwon              #+#    #+#             */
/*   Updated: 2024/09/03 18:58:35 by cwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_d;
	unsigned char	*ptr_s;
	size_t			i;

	ptr_d = (unsigned char *)dest;
	ptr_s = (unsigned char *)src;
	i = 0;
	if (ptr_d <= ptr_s)
	{
		while (i < n)
		{
			ptr_d[i] = ptr_s[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			ptr_d[n - 1] = ptr_s[n - 1];
			n--;
		}
	}
	return (dest);
}
