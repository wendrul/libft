/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-thom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 11:15:55 by ede-thom          #+#    #+#             */
/*   Updated: 2019/11/06 11:15:57 by ede-thom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*d;
	char	*s;

	d = (char*)dest;
	s = (char*)src;
	while (n--)
	{
		if (*s == c)
			return (s + 1);
		*d++ = *s++;
	}
	return (NULL);
}
