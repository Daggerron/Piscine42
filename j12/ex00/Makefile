# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/20 13:22:39 by cmalfroy          #+#    #+#              #
#    Updated: 2017/07/20 14:46:18 by cmalfroy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

CC = gcc

FLAG = -Wall -Werror -Wextra

SRC = display_file.c

all : $(NAME)

$(NAME) :
	$(CC) $(FLAG) $(SRC) -o $(NAME)

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)
