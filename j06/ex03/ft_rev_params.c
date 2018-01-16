/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 15:24:28 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/07/11 17:21:32 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i = i + 1;
	}
}

int			main(int argc, char **argv)
{
	int i;

	i = argc;
	if (argc > 1)
	{
		while (i != 1)
		{
			ft_putstr(argv[i - 1]);
			ft_putchar('\n');
			i--;
		}
	}
	return (0);
}
