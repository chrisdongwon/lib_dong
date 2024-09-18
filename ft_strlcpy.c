#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;
	size_t	n;

	src_len = ft_strlen(src);
	i = 0;
	if (size)
	{
		if (size <= src_len)
			n = size - 1;
		else
			n = src_len;
		while (i < n)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	return (ft_strlen(src));
}
