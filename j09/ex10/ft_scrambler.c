/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 09:39:41 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/07/14 09:45:59 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int temp;
	int temp2;

	temp = ***a;
	***a = *b;
	temp2 = *******c;
	*******c = temp;
	temp = *b;
	*b = ****d;
	****d = temp2;
}