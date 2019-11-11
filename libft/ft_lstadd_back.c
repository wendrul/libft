/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-thom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 05:34:58 by ede-thom          #+#    #+#             */
/*   Updated: 2019/11/11 06:01:33 by ede-thom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*cur;

	if (!alst || !new)
		return ;
	if (*alst == NULL)
		*alst = new;
	else
	{
		cur = *alst;
		while (cur->next)
			cur = cur->next;
		cur->next = new;
	}
}
