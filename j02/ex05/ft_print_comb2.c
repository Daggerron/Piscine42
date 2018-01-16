/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 10:07:29 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/07/05 14:56:32 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_use_putchar(int i, int j)
{
	int a;
	int b;

	a = i / 10;
	b = i % 10;
	ft_putchar(a + 48);
	ft_putchar(b + 48);
	ft_putchar(' ');
	a = j / 10;
	b = j % 10;
	ft_putchar(a + 48);
	ft_putchar(b + 48);
	if (i != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 1;
	while (a != 99)
	{
		while (b != 100)
		{
			ft_use_putchar(a, b);
			b = b + 1;
		}
		a = a + 1;
		b = a + 1;
	}
}
