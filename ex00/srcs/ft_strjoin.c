#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char *ret;

	if ((ret = (char*)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(*ret))) == NULL)
		return (NULL);
	while (*s1)
		*ret++=*s1++;
	while (*s2)
		*ret++=*s2++;
	*ret = '\0';
	return (ret);
}
