#include "libft.h"

static void	copy_right(unsigned char *d, unsigned char *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
}

static void	copy_left(unsigned char *d, unsigned char *s, size_t n)
{
	while (n > 0)
	{
		d[n - 1] = s[n - 1];
		n--;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_d;
	unsigned char	*ptr_s;

	if (!dest && !src)
		return (0);
	ptr_d = (unsigned char *)dest;
	ptr_s = (unsigned char *)src;
	if (ptr_d <= ptr_s)
		copy_right(ptr_d, ptr_s, n);
	else
		copy_left(ptr_d, ptr_s, n);
	return (dest);
}
