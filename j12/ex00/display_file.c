/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 13:34:24 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/07/21 11:35:19 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

#define BUF_SIZE 28672

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	int		i;

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

	fd = open(fichier, O_RDONLY);
	if (fd == -1)
		return ;
	retour_read = read(fd, buf, BUF_SIZE);
	if (retour_read == -1)
		return ;
	buf[retour_read] = '\0';
	ft_putstr(buf);
	close(fd);
}

int			main(int argc, char **argv)
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
		display_file(argv[1]);
}
