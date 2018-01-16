/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 13:45:04 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/07/18 15:34:32 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			ft_atoi(char *str)
{
	int number;
	int i;
	int is_neg;

	i = 0;
	is_neg = 0;
	number = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
			|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == '-')
		is_neg = 1;
	if ((str[i] == '-') || (str[i] == '+'))
		i++;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		number *= 10;
		number += (str[i] - 48);
		i++;
	}
	if (is_neg)
		return (-number);
	else
		return (number);
}

int			addition(int a, int b);
int			soustraction(int a, int b);
int			multiplication(int a, int b);
int			modulo(int a, int b);
int			division(int a, int b);

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

void		choix(char **argv, int (**tab)(int, int))
{
	if (argv[2][0] == '+')
		ft_putnbr(tab[0](ft_atoi(argv[1]), ft_atoi(argv[3])));
	else if (argv[2][0] == '*')
		ft_putnbr(tab[1](ft_atoi(argv[1]), ft_atoi(argv[3])));
	else if (argv[2][0] == '-')
		ft_putnbr(tab[2](ft_atoi(argv[1]), ft_atoi(argv[3])));
	else if (argv[2][0] == '%' && ft_atoi(argv[3]) == 0)
		write(1, "Stop : modulo by zero", 22);
	else if (argv[2][0] == '%' && ft_atoi(argv[3]) != 0)
		ft_putnbr(tab[3](ft_atoi(argv[1]), ft_atoi(argv[3])));
	else if (argv[2][0] == '/' && ft_atoi(argv[3]) == 0)
		write(1, "Stop : division by zero", 24);
	else if (argv[2][0] == '/' && ft_atoi(argv[3]) != 0)
		ft_putnbr(tab[4](ft_atoi(argv[1]), ft_atoi(argv[3])));
	else
		ft_putchar('0');
	ft_putchar('\n');
}

int			main(int argc, char **argv)
{
	int (*tab[5])(int, int);

	tab[0] = &addition;
	tab[1] = &multiplication;
	tab[2] = &soustraction;
	tab[3] = &modulo;
	tab[4] = &division;
	if (argc == 4)
	{
		choix(argv, tab);
	}
	return (0);
}
