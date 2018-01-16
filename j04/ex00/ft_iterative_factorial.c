/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 01:46:30 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/07/08 16:34:04 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

int			ft_iterative_factorial(int nb)
{
	int result;

	result = nb;
	if (nb && nb > 0 && nb <= 12)
	{
		while (nb != 1)
		{
			result = result * (nb - 1);
			nb = nb - 1;
		}
		return (result);
	}
	else if (nb == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
