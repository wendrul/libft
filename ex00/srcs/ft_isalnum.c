#include "libft.h"

int	ft_isalnum(int c)
{
	return (isalpha(c) || isdigit(c));
}
