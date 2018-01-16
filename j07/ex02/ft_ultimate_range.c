/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 13:46:35 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/07/15 10:45:34 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *tab;

	if (max > min)
	{
		i = 0;
		tab = (int*)(malloc(sizeof(int) * (max - min + 1)));
		while (min < max)
		{
			tab[i] = min;
			min++;
			i++;
		}
		*range = tab;
		return (i);
	}
	else
		return (0);
}
