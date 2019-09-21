#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*d;
	char	*s;

	d = (char*)dest;
	s = (char*)src;
	while (n--)
	{
		if (*s == c)
			return (s + 1);
		*d++ = *s++;
	}
	return (NULL);
}
