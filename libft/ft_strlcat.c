/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-thom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 19:51:30 by ede-thom          #+#    #+#             */
/*   Updated: 2019/11/07 23:38:32 by ede-thom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	slen;
	size_t	dlen;
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
