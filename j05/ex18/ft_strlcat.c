/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 21:13:58 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/07/11 17:49:03 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[k] != '\0')
		k++;
	if (k + i < size - 1 && src[i] != '0')
	{
		while (src[i] != '\0')
		{
			dest[k + i] = src[i];
			i++;
		}
		while (j != size)
		{
			i++;
			j++;
		}
	}
	dest[k + i] = '\0';
	return (i);
}
