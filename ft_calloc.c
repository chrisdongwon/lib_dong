/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwon <cwon@student.42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 06:31:11 by cwon              #+#    #+#             */
/*   Updated: 2024/09/04 07:47:23 by cwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	len;

	if (!nmemb || !size)
		return (0);
	len = nmemb * size * sizeof(unsigned char *);
	ptr = malloc(len);
	return (ft_memset(ptr, 0, len));
}
