#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	i;
	size_t	len;

	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	result = (char *)malloc(len + 1);
	if (result)
	{
		i = 0;
		while (i < len)
		{
			result[i] = (*f)(i, s[i]);
			i++;
		}
		result[i] = 0;
	}
	return (result);
}
