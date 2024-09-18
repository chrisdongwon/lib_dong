#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	len;

	if ((size_t)(-1) / nmemb < size)
		return (0);
	len = nmemb * size;
	ptr = malloc(len);
	if (ptr)
		ft_bzero(ptr, len);
	return (ptr);
}
