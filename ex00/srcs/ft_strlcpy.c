/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-thom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 12:30:06 by ede-thom          #+#    #+#             */
/*   Updated: 2019/11/06 12:45:07 by ede-thom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t dstsize)
{
	size_t	srclen;
	int		n;

	srclen = ft_strlen(src);
	n = 0;
	if (size > len)
	{
		while (src[n])
		{
			dest[n] = src[n];
			n++;
		}
	}
	else
	{
		while (n < size - 1 && size > 0)
		{
			dest[n] = src[n];
			n++;
		}
		dest[n] = '\0';
	}
	return (len);
}
