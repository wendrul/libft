//#include "libft.h"
#include <stdio.h>

static int	count_words(char *str, char c)
{
	int		words;
	
	words = 0;
	while (*str)
	{
		if (*str != c)
		{
			words++;
			while (*str && *str != c)
				str++;
		}
		while (*str && *str == c)
			str++;
	}
	return (words);
}

char		**ft_split(char const *str, char c)
{
	char	**tab;
	
	if (count_words(str) == 0)
		return (NULL);
	if ((splut = (char*)malloc(count_words)) == NULL)
}

int		main (int argc, char **argv)
{
	printf("%d", count_words(argv[1], ' '));
	return (0);
}
