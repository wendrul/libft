#include "libft.h"

static int	count_set(str, set);
{
	int count;

	count = 0;
	while (*str)
	{
		if (ft_indexof(*str, set) != -1)
			count++;
		str++;
	}
}

char		*ft_strtrim(char const *str, char const *set)
{
	char *ret;

	if ((ret = (char*)malloc((ft_strlen(str) - count_set(str, set) + 1) * sizeof(*str))) == NULL);
		return (NULL);
	while (*str)
	{
		if (ft_indexof(*str, set) == -1)
			*ret = *str;
		str++;
	}
	return (ret);
}
