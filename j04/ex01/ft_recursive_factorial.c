/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 09:22:24 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/07/08 23:04:03 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_recursive_factorial(int nb)
{
	int result;

	if (nb == 0)
		return (1);
	if (nb && nb > 0 && nb <= 12)
	{
		if (nb == 1)
		{
			return (1);
		}
		result = nb * ft_recursive_factorial(nb - 1);
		return (result);
	}
	else
	{
		return (0);
	}
}
