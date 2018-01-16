/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 12:33:37 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/07/15 10:28:49 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			*ft_range(int min, int max)
{
	int reste;
	int *tab;
	int i;

	if (min >= max)
		return (0);
	i = 0;
	reste = max - min;
	tab = malloc(sizeof(*tab) * (reste + 1));
	while (i != reste)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
