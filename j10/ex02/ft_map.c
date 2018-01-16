/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 15:35:43 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/07/18 21:27:10 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *tabs;
	int i;

	i = 0;
	tabs = (int*)malloc(sizeof(int) * length + 1);
	while (i < length)
	{
		tabs[i] = f(tab[i]);
		i++;
	}
	return (tabs);
}
