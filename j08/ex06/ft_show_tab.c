/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 09:24:56 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/07/18 10:02:31 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void		ft_putnbr(int nb)
{
	int		tab[10];
	int		n;
	int		b;
	char	c;

	n = 0;
	b = 0;
	if (nb < 0)
	{
		b++;
		nb = nb * -1;
	}
	while (nb > 0)
	{
		tab[n++] = nb % 10;
		nb = nb / 10;
	}
	if (b == 1)
		ft_putchar('-');
	while (--n > -1)
	{
		c = (char)tab[n] + 48;
		ft_putchar(c);
	}
}

void		ft_putstr(char *str)
{
	int cpt;

	cpt = 0;
	while (str[cpt] != '\0')
	{
		ft_putchar(str[cpt]);
		cpt = cpt + 1;
	}
}

void		ft_show_tab(struct s_stock_par *par)
{
	int i;
	int j;

	i = 0;
	while (par[i].str != '\0')
	{
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		ft_putnbr(par[i].size_param);
		ft_putchar('\n');
		j = 0;
		while (par[i].tab[j])
		{
			ft_putstr(par[i].tab[j]);
			ft_putchar('\n');
			j++;
		}
		i++;
	}
}
