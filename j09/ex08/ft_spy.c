/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 00:45:02 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/07/14 13:34:30 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char		*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i += 1;
	}
	return (str);
}

int			ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int			main(int argc, char **argv)
{
	int i;

	i = 0;
	while (i < argc)
	{
		ft_strupcase(argv[i]);
		if (ft_strcmp(argv[i], "PRESIDENT") == 0 ||
				ft_strcmp(argv[i], "ATTACK") == 0 ||
				ft_strcmp(argv[i], "BAUER") == 0)
			write(1, "Alert!!!\n", 9);
		i++;
	}
	return (0);
}
