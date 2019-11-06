#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char *src1;
	char *src2;

	src1 = (unsigned char*)s1;
	src2 = (unsigned char*)s2;
	while (n--)
	{
		if (*src1 != *src2)
			return (*src1 - *src2);
		src1++;
		src2++;
	}
	return (0);
}
