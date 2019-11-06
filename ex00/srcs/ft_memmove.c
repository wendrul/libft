#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*desert;
	char	*sauce;

	desert = (char*)dest;
	sauce = (char*)src;
	if (dest > src)
	{
		while(n--)
			desert[n] = sauce[n];
	}
	else
		ft_memcpy(dest, src, n)
	return (dest);
}
