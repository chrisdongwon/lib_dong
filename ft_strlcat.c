/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwon <cwon@student.42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:47:08 by cwon              #+#    #+#             */
/*   Updated: 2024/06/04 17:58:43 by cwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	length;
	char			*ptr;

	length = 0;
	ptr = str;
	while (ptr && *ptr)
	{
		length++;
		ptr++;
	}
	return (length);
}

// ptr[0]: pointer to dest, ptr[1]: pointer to src
// 25 line limit so pointers have been combined to an array
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*ptr[2];
	unsigned int	dest_length;
	unsigned int	n;

	ptr[0] = dest;
	ptr[1] = src;
	n = size;
	while (*ptr[0] && n--)
		ptr[0]++;
	dest_length = ptr[0] - dest;
	n = size - dest_length;
	if (!n)
		return (dest_length + ft_strlen(src));
	while (*ptr[1])
	{
		if (n != 1)
		{
			*ptr[0] = *ptr[1];
			ptr[0]++;
			n--;
		}
		ptr[1]++;
	}
	*ptr[0] = '\0';
	return (dest_length + (ptr[1] - src));
}
