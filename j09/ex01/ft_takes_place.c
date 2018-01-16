/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 17:43:58 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/07/13 18:39:31 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void		ft_takes_place(int hour)
{
	if (hour < 11)
		printf("THE FOLLOWS TAKES PLACE BETWEEN %d.00 A.M. and %d.00 A.M.",
				hour, hour + 1);
	if (hour == 12)
		printf("THE FOLLOWS TAKES PLACE BETWEEN 12.00 P.M. and 01.00 P.M.");
	if (hour == 11)
		printf("THE FOLLOWS TAKES PLACE BETWEEN 11.00 A.M. and 12.00 P.M.");
	if (hour > 12 && hour < 23)
	{
		hour = hour - 12;
		printf("THE FOLLOWS TAKES PLACE BETWEEN %d.00 P.M. and %d.00 P.M.",
				hour, hour + 1);
	}
	if (hour == 23)
		printf("THE FOLLOWS TAKES PLACE BETWEEN 23.00 P.M. and 00.00 A.M.");
	if (hour == 24)
		printf("THE FOLLOWS TAKES PLACE BETWEEN 00.00 A.M. and 01.00 A.M.");
}
