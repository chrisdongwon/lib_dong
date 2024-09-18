#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s) + 1;
	while (i < len)
	{
		if (s[i] == (c % 128))
			return ((char *)(s + i));
		i++;
	}
	return (0);
}
