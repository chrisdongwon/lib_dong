/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwon <cwon@student.42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:28:38 by cwon              #+#    #+#             */
/*   Updated: 2024/06/04 17:23:26 by cwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		length;
	char	*ptr;

	length = 0;
	ptr = str;
	while (ptr && *ptr != '\0')
	{
		length++;
		ptr++;
	}
	return (length);
}

// ptr array because norminette limits at 25 lines
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	indices[2];
	char			*ptrs[2];

	indices[0] = 0;
	indices[1] = ft_strlen(src);
	ptrs[0] = dest;
	ptrs[1] = src;
	if (size)
	{
		while (indices[0] < size - 1 && ptrs[0] && ptrs[1])
		{
			*ptrs[0] = *ptrs[1];
			ptrs[0]++;
			ptrs[1]++;
			indices[0]++;
		}
		while (indices[0] < indices[1] && ptrs[1])
		{
			ptrs[1]++;
			indices[0]++;
		}
		if (ptrs[0])
			*ptrs[0] = '\0';
	}
	return (indices[1]);
}
