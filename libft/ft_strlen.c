/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-thom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 11:16:23 by ede-thom          #+#    #+#             */
/*   Updated: 2019/11/10 17:38:58 by ede-thom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		haszero(unsigned long int *v)
{
	return (!((*v & 0xff00000000000000) && 
				(*v & 0xff0000000000)	&& 
				(*v & 0xff00000000)		&& 
				(*v & 0xff000000)		&&
				(*v & 0xff0000)			&&
				(*v & 0xff00)			&&
				(*v & 0xff)));
}

size_t	ft_strlen(const char *str)
{
	register char *cur;

	cur = (char*)str;
	while (((unsigned long int)cur & (sizeof(unsigned long int)) - 1) != 0)
	{
			if (*cur == '\0')
				   return (cur - str);
			cur++;
	}	
	while (*cur && !haszero((unsigned long int*)cur))
		cur += 4;
	while (*cur)
		cur++;
	return (cur - str);
}
