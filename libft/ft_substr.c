/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-thom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 20:21:44 by ede-thom          #+#    #+#             */
/*   Updated: 2019/11/10 17:48:27 by ede-thom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	size;

	if (s == NULL)
		return ((char*)NULL);	
	size = ft_min(len, ft_strlen(&s[start]));
	if ((str = (char*)malloc((size + 1) * sizeof(*str))) == NULL)
			return (NULL);
	ft_memmove(str, &s[start], size + 1);
	str[size] = '\0';
	return (str);
}
