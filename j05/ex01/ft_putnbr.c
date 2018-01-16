/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 18:25:58 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/07/12 18:26:01 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_putnbr(int nb)
{
	unsigned int nbr;
	unsigned int tens;

	if (nb < 0)
	{
		nbr = -nb;
		ft_putchar('-');
	}
	else
		nbr = nb;
	tens = 1;
	while (tens <= nbr / 10)
		tens *= 10;
	while (tens > 1)
	{
		ft_putchar((nbr / tens) + '0');
		nbr = nbr % tens;
		tens /= 10;
	}
	ft_putchar(nbr + '0');
}
