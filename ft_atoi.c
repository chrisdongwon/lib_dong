#include "libft.h"

static int	is_whitespace(int c)
{
	return ((9 <= c && c <= 13) || (c == 32));
}

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		sign;
	int		result;

	i = 0;
	sign = 1;
	result = 0;
	while (is_whitespace(nptr[i]))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] && ft_isdigit(nptr[i]))
		result = (result * 10) + (nptr[i++] - '0');
	return (sign * result);
}
