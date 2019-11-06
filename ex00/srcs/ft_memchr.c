#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*((unsigned char*)src) == (unsigned char)c)
			return (src);
		src++;
	}
	return (NULL);
}
