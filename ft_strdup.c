#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	i;
	size_t	len;

	len = ft_strlen(s);
	ptr = (char *)malloc(len + 1);
	i = 0;
	if (s && ptr)
	{
		while (i < len)
		{
			ptr[i] = s[i];
			i++;
		}
		ptr[i] = 0;
	}
	return (ptr);
}
