/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 10:07:29 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/07/05 14:55:24 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_printabc(int a, int b, int c)
{
	ft_putchar('0' + a % 10);
	ft_putchar('0' + b % 10);
	ft_putchar('0' + c % 10);
	if (a < 7 || b < 8 || c < 9)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	while (a < 8)
	{
		b = a + 1;
		while (b < 9)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_printabc(a, b, c);
				c += 1;
			}
			b += 1;
		}
		a += 1;
	}
}
