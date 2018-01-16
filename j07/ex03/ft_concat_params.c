/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 14:03:52 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/07/17 19:31:52 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\n';
	dest[i + j + 1] = '\0';
	return (dest);
}

char		*ft_strcatb(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char		*ft_concat_params(int argc, char **argv)
{
	char	*tab;
	int		j;
	int		i;
	int		count;

	count = 0;
	while (count < argc)
	{
		j = 0;
		while (argv[j])
		{
			count++;
			j++;
		}
	}
	tab = malloc(sizeof(*tab) * (count + 1));
	i = 0;
	while (i < argc - 1)
	{
		tab = i == argc - 2 ? ft_strcatb(tab, argv[i + 1])
			: ft_strcat(tab, argv[i + 1]);
		i++;
	}
	return (tab);
}
