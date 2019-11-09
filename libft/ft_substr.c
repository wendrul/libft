/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-thom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 20:21:44 by ede-thom          #+#    #+#             */
/*   Updated: 2019/11/07 21:59:28 by ede-thom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	
	size = ft_max(len, ft_strlen(&s[start]));
	if ((str = (char*)malloc((size + 1) * sizeof(*str))) == NULL)
			return (NULL);
	ft_strlcpy(str, &s[start], size);
	return (str);
}
