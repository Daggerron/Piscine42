/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 19:52:03 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/07/21 11:34:03 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <errno.h>

#define BUF_SIZE 28672

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void		display_file(char *fichier)
{
	int		fd;
	int		retour_read;
	char	buf[BUF_SIZE + 1];

	fd = open(fichier, O_RDWR);
	if (fd == -1)
	{
		ft_putstr("cat: ");
		ft_putstr(fichier);
		if (errno == 21)
			ft_putstr(": Is a directory\n");
		else
			ft_putstr(": No such file or directory\n");
		return ;
	}
	retour_read = read(fd, buf, BUF_SIZE);
	if (retour_read == -1)
		return ;
	buf[retour_read] = '\0';
	ft_putstr(buf);
	close(fd);
}

void		infini(void)
{
	char	c;

	while (read(STDIN_FILENO, &c, 1) > 0)
		write(1, &c, 1);
}

int			main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc == 1)
	{
		infini();
	}
	while (i < argc)
	{
		display_file(argv[i]);
		i++;
	}
}
