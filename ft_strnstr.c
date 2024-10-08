#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!little[j])
		return ((char *)big);
	while (i < len && big[i])
	{
		while (i + j < len && big[i + j] && little[j] == big[i + j])
		{
			if (!little[++j])
				return ((char *)(big + i));
		}
		i++;
		j = 0;
	}
	return (0);
}
