/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 10:31:26 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/07/20 17:17:11 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_clear(t_list **begin_list)
{
	t_list *temp;

	if (!begin_list || !*begin_list)
		return ;
	while (*begin_list)
	{
		temp = *begin_list;
		*begin_list = (*begin_list)->next;
		free(temp);
	}
	*begin_list = NULL;
}
