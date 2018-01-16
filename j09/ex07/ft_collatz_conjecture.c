/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 23:48:09 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/07/14 13:31:49 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base != 1 && base != 0)
	{
		if (base % 2 == 1)
		{
			return (ft_collatz_conjecture(base * 3 + 1) + 1);
		}
		else
		{
			return (ft_collatz_conjecture(base / 2) + 1);
		}
	}
}
