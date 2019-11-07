#include "libft.h"
#include <stdio.h>

int ft_strlen(const char *str)
{
	int i;
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_atoi_base(const char *nptr, const char *base)
{
	int sgn;
	unsigned int nb;
	
	sgn = 1;
	while (ft_iswhitespace(*nptr))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sgn = -1;
		nptr++;
	}
	nb = 0;
	while (ft_indexof(*nptr, base) != -1)
	{
		printf("nb %d\n", nb);
		nb += nb * ft_strlen(base) + ft_indexof(*nptr, base);
		printf("nbaft %d\n", nb);
		nptr++;
	}
	return (sgn * nb);
}


int main(int argc, char **argv)
{
	if (argc >= 3)
	{
		printf("%s -> %d", argv[1],ft_atoi_base(argv[1], argv[2]));
	}
	return (0);
}
