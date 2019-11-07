#include "libft.h"

int	ft_indexof(char needle, char *hay)
{
	int i;

	i = 0;
	while (hay[i])
	{
		if (hay[i] == needle)
			return (i);
		i++;
	}
	return (-1);
}
