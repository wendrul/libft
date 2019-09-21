#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = (char*)dest;
	s = (char*)src;
	while (n--)
		*d++ = *s++;
	return (dest);
}
