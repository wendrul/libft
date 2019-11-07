#include "libft.h"

int	ft_strlcat(char *dest, char *src, size_t dstsize)
{
	size_t	len;
	size_t	src;
	int		i;

	dlen = ft_strlen(dest); 
	slen = ft_strlen(src);
	i = 0;
	if (dlen + slen < dstsize)
	{
		while (src[i])
		{
			dest[dlen + i - 1] = src[i];
			i++;
		}
	}
	else
	{
		while (src[i] && i + dlen < dstsize - 1)
		{
			dest[dlen + i - 1] = src[i];
			i++;
		}
	}
	dest[dlen + i - 1] = '\0';
	return (dlen + slen);
}



