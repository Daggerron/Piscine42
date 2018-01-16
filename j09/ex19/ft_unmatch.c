/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 11:46:20 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/07/14 13:42:03 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_unmatch(int *tab, int length)
{
	int		i;
	int		j;
	int		f;

	i = 0;
	while (i < length)
	{
		f = 0;
		j = 1;
		while (f < length)
		{
			if (f != i)
				if (tab[f] == tab[i])
					j++;
			f++;
		}
		if (j % 2 != 0)
			return (tab[i]);
		i++;
	}
	return (tab[i]);
}
