/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 19:52:03 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/07/21 11:31:53 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <errno.h>
#include "ft.h"
#include <stdio.h>

#define BUF_SIZE 28672

void		ft_putstr(char *str, int nb)
{
	int i;

	i = 0;
	if (nb > 0)
		i = nb - 1;
	if (nb < 0)
	{
		while (str[i])
			i++;
		i += nb;
	}
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void		display_file(char *fichier, int nb, int cpt, int i)
{
	int		fd;
	int		retour_read;
	char	buf[BUF_SIZE + 1];

	fd = open(fichier, O_RDONLY);
	if (fd == -1)
	{
		no_file(fichier);
		return ;
	}
	retour_read = read(fd, buf, BUF_SIZE);
	if (retour_read == -1)
		return ;
	if (cpt >= 1)
	{
		if (i != 3)
			ft_putchar('\n');
		ft_putstr("==> ", 0);
		ft_putstr(fichier, 0);
		ft_putstr(" <==\n", 0);
	}
	buf[retour_read] = '\0';
	ft_putstr(buf, nb);
	close(fd);
}

void		infini(void)
{
	int		i;
	char	c;

	i = 0;
	while (read(STDIN_FILENO, &c, 1) > 0)
		i++;
}

int			main(int argc, char **argv)
{
	int		cpt;
	int		i;

	cpt = argc - 1 - 3;
	i = 3;
	if (argc > 3 && ft_str_is_numeric(argv[2]) == 1)
		while (i < argc)
		{
			if (argv[2][0] == '+' || argv[2][0] == '-')
				display_file(argv[i], ft_atoi(argv[2]), cpt, i);
			else
				display_file(argv[i], -ft_atoi(argv[2]), cpt, i);
			i++;
		}
	else if (argc == 2)
		no_arguments();
	else if (argc == 3 && ft_str_is_numeric(argv[2]) == 1)
		infini();
	else if (ft_str_is_numeric(argv[2]) == 0 && argc > 2)
		illegal_offset(argv);
	return (0);
}
