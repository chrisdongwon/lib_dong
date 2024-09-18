#include "libft.h"

static void	concatenate(char **ptr_d, const char **ptr_s, size_t n)
{
	while (**ptr_s)
	{
		if (n != 1)
		{
			**ptr_d = **ptr_s;
			(*ptr_d)++;
			n--;
		}
		(*ptr_s)++;
	}
	**ptr_d = 0;
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*ptr_d;
	const char	*ptr_s;
	size_t		n;
	size_t		dst_len;

	ptr_d = dst;
	ptr_s = src;
	n = size;
	while (n-- && *ptr_d)
		ptr_d++;
	dst_len = ptr_d - dst;
	n = size - dst_len;
	if (!n)
		return (dst_len + ft_strlen(src));
	concatenate(&ptr_d, &ptr_s, n);
	return (dst_len + (ptr_s - src));
}
