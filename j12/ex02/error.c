/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 11:05:46 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/07/21 11:26:45 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <unistd.h>

void	no_file(char *fichier)
{
	ft_putstr("tail: ", 0);
	ft_putstr(fichier, 0);
	ft_putstr(": No such file or directory\n", 0);
}

void	no_arguments(void)
{
	ft_putstr("tail: option requires an argument -- c\n", 0);
	ft_putstr("usage: tail [-F | -f | -r] [-q] [-b", 0);
	ft_putstr(" # | -c # | -n #] [file ...]\n", 0);
}

void	illegal_offset(char **argv)
{
	ft_putstr("tail: illegal offset -- ", 0);
	ft_putstr(argv[2], 0);
	ft_putchar('\n');
}
