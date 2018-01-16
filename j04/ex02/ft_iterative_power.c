/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 09:52:40 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/07/08 23:24:49 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

int			ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	result = 1;
	i = 0;
	if (power > 0)
	{
		while (i < power)
		{
			result = result * nb;
			i = i + 1;
		}
	}
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (result);
}
