/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-thom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 22:33:43 by ede-thom          #+#    #+#             */
/*   Updated: 2019/11/11 01:26:49 by ede-thom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		what_pow(unsigned int nb)
{
	int			pow;

	pow = 0;
	if (nb == 0)
		return (1);
	while (nb)
	{
		pow++;
		nb /= 10;
	}
	return (pow);
}

char	*ft_itoa(int nb)
{
	char	*ret;
	int		size;
	unsigned int n;
	int	i;

	if (nb < 0)
	{
		n = -nb;
		size = 1;
	}
	else
	{
		n = nb;
		size = 0;
	}
	size += what_pow(n);
	if (!(ret = (char*)malloc((size + 1) * sizeof(*ret))))
		return (NULL);
	ret[size] = '\0';
	i = 0;
	if (size - what_pow(n) == 1 && size--)
		ret[i++] = '-';
	while (size)
	{
		size--;
		ret[i] = n / ft_pow(10, size) + 48;
		n = n % ft_pow(10, size);
		i++;
	}
	return (ret);
}
