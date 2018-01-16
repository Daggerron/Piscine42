/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 12:26:48 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/07/20 10:28:40 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int			ft_list_size(t_list *begin_list)
{
	int		i;
	t_list	*prout;

	i = 0;
	prout = begin_list;
	while (prout)
	{
		i++;
		prout = prout->next;
	}
	return (i);
}
