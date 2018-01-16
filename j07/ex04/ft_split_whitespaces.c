/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces2.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 21:34:52 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/07/16 11:31:52 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		**ft_create_tab(char *str, int nb_word, int max_len_word)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	tab = (char**)malloc(sizeof(*tab) * nb_word + 1);
	i = 0;
	j = 0;
	while (j < nb_word && str[i])
	{
		k = 0;
		tab[j] = (char*)malloc(sizeof(**tab) * max_len_word + 1);
		while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])
			i++;
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
		{
			tab[j][k] = str[i];
			i++;
			k++;
		}
		tab[j][k] = '\0';
		j++;
	}
	tab[j] = 0;
	return (tab);
}

char		**ft_split_whitespaces(char *str)
{
	int		nb_word;
	int		len_word;
	int		max_len_word;
	int		i;

	nb_word = 0;
	max_len_word = 0;
	i = 0;
	while (str[i++])
	{
		len_word = 0;
		while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])
			i++;
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
		{
			nb_word++;
			while (str[i] != ' ' && str[i] != '\t' &&
					str[i] != '\n' && str[i++])
				len_word++;
			if (len_word > max_len_word)
				max_len_word = len_word;
		}
	}
	return (ft_create_tab(str, nb_word, max_len_word));
}
