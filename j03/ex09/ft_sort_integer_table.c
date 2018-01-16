/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 19:55:58 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/07/13 09:30:14 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_sort_integer_table(int *tab, int size)
{
	int i;
	int temp;

	i = 0;
	while (i != size)
	{
		if (tab[i + 1] < tab[i])
		{
			temp = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = temp;
			i = -1;
		}
		i++;
	}
}
