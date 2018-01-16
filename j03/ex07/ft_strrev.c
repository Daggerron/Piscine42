/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 20:09:57 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/07/06 01:23:36 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i += 1;
	}
	return (i);
}

char		*ft_strrev(char *str)
{
	int		length;
	int		i;
	char	temp;

	i = 0;
	length = ft_strlen(str);
	while (i < length / 2)
	{
		temp = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = temp;
		i = i + 1;
	}
	return (str);
}
