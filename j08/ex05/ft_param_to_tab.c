/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 15:03:00 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/07/18 10:04:31 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

char				*ft_strdup(char *src)
{
	char			*cpy;
	int				i;

	i = 0;
	while (src[i] != '\0')
		i++;
	cpy = malloc(sizeof(*cpy) * (i + 1));
	i = 0;
	while (src[i] != '\0')
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par		*stock;
	int				i;
	int				len;

	i = 0;
	stock = malloc(sizeof(t_stock_par) * (ac + 1));
	while (i < ac)
	{
		len = 0;
		while (av[i][len] != '\0')
			len++;
		stock[i].size_param = len;
		stock[i].str = av[i];
		stock[i].copy = ft_strdup(av[i]);
		stock[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	stock[i].str = 0;
	return (stock);
}
