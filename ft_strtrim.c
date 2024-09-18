#include "libft.h"

static int	is_member(int c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (0);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (is_member(s1[start], set))
		start++;
	while (is_member(s1[end], set))
		end--;
	return (ft_substr(s1, start, end - start + 1));
}
