/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwon <cwon@student.42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 08:07:14 by cwon              #+#    #+#             */
/*   Updated: 2024/09/05 20:47:53 by cwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	total_len;
	size_t	i;

	ptr = (char *)malloc(len + 1);
	if (!s || !ptr)
		return (0);
	i = 0;
	total_len = ft_strlen(s);
	while (i < len && start < total_len)
		ptr[i++] = s[start++];
	ptr[i] = 0;
	return (ptr);
}
