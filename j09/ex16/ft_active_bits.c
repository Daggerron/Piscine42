/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 11:32:15 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/07/14 15:02:23 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_active_bits(int value)
{
	unsigned int count;

	count = 0;
	while (value / 2 == 0)
	{
		if (value % 2 == 1)
			count++;
		value = value / 2;
	}
	return (count);
}
