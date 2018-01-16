/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 16:34:22 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/07/20 12:24:08 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *elem;

	elem = *begin_list;
	if (begin_list && *begin_list)
	{
		elem = *begin_list;
		while (elem->next)
		{
			elem = elem->next;
		}
		elem->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
