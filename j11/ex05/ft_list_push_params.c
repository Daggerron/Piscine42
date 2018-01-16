/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 17:31:15 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/07/20 15:54:18 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list			*ft_list_push_params(int ac, char **av)
{
	t_list		*temp;
	t_list		*list;
	int			i;

	if (ac <= 0)
		return (NULL);
	i = 0;
	temp = NULL;
	while (i < ac)
	{
		list = ft_create_elem(av[i]);
		list->next = temp;
		temp = list;
		++i;
	}
	return (list);
}
