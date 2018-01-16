/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 20:17:19 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/07/20 15:42:15 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *list;

	list = *begin_list1;
	if (*begin_list1)
	{
		while (list->next)
			list = list->next;
		list->next = begin_list2;
	}
	else
		*begin_list1 = begin_list2;
}
