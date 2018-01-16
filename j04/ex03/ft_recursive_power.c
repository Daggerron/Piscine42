/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 15:46:47 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/07/06 18:49:52 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	nb = nb * ft_recursive_power(nb, power - 1);
	return (nb);
}
