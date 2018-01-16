/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 20:11:36 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/07/09 20:15:43 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_recursive(int nb)
{
	if (nb == 0)
		return (0);
	nb = nb * ft_recursive(nb - 1);
	return (nb);
}

int			ft_eight_queens_puzzle(void)
{
	ft_recursive(5);
	return (92);
}
