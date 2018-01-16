/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 18:19:13 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/07/10 23:28:08 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i += 1;
	}
	return (str);
}

char		*ft_strcapitalize(char *str)
{
	int i;
	int test;

	i = 1;
	test = 0;
	str = ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
			test = 0;
		if (test == 1 && str[i] >= 'a' && str[i] <= 'z')
		{
			test = 0;
			str[i] -= 32;
		}
		if (str[i] == ' ' || str[i] < 48 || str[i] > 122 || (str[i] > 57 &&
					str[i] < 65) || (str[i] > 90 && str[i] < 97))
			test = 1;
		i++;
	}
	return (str);
}
