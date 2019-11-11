/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-thom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 19:51:30 by ede-thom          #+#    #+#             */
/*   Updated: 2019/11/11 03:50:45 by ede-thom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	j = -1;
	while (dest[i])
		i++;
	while (src[++j] && i + j + 1 < size && i < size)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	while (src[j])
		j++;
	if (i < size)
		return (i + j);
	else
		return (size + j);
}
