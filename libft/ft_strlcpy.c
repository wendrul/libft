/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-thom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 12:30:06 by ede-thom          #+#    #+#             */
/*   Updated: 2019/11/07 23:37:14 by ede-thom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	srclen;
	int		n;

	srclen = ft_strlen(src);
	n = 0;
	if (dstsize > srclen)
	{
		while (src[n])
		{
			dest[n] = src[n];
			n++;
		}
	}
	else
	{
		while ((unsigned long)n < dstsize - 1 && dstsize > 0)
		{
			dest[n] = src[n];
			n++;
		}
		dest[n] = '\0';
	}
	return (srclen);
}
