#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	total_len;
	size_t	i;

	if (!s)
		return (0);
	total_len = ft_strlen(s);
	if (start >= total_len)
		len = 0;
	else if (len >= total_len - start)
		len = total_len - start;
	ptr = (char *)malloc(len + 1);
	if (ptr)
	{
		i = 0;
		while (i < len)
			ptr[i++] = s[start++];
		ptr[i] = 0;
	}
	return (ptr);
}
