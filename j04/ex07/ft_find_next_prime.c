/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 18:16:12 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/07/08 23:24:15 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

int			ft_is_prime(int nb)
{
	int i;

	if (nb < 2)
		return (0);
	i = 2;
	if (nb == 1 || nb == 0)
	{
		return (0);
	}
	while (i <= nb / i)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i += 1;
	}
	return (1);
}

int			ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
		nb += 1;
	while (ft_is_prime(nb) != 1)
	{
		nb += 2;
	}
	return (nb);
}
