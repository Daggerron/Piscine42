/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_parameters.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 09:35:06 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/07/11 17:22:06 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			ft_putchar(char c);

void			ft_putstr(char *str)
{
	int			i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i = i + 1;
	}
	ft_putchar('\n');
}

int				ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void			ft_sort_params(char **list, int size)
{
	int			sorted;
	int			i;
	char		*temp;

	i = 0;
	sorted = 0;
	while (!sorted)
	{
		i = 0;
		sorted = 1;
		while (i < size - 1)
		{
			if (ft_strcmp(list[i], list[i + 1]) > 0)
			{
				sorted = 0;
				temp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = temp;
			}
			i++;
		}
	}
}

int				main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc > 1)
	{
		ft_sort_params(argv + 1, argc - 1);
		while (i < argc)
		{
			ft_putstr(argv[i]);
			i++;
		}
	}
	return (0);
}
