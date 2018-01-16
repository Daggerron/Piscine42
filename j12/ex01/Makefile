# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/20 13:22:39 by cmalfroy          #+#    #+#              #
#    Updated: 2017/07/20 19:58:01 by cmalfroy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

CC = gcc

FLAG = -Wall -Werror -Wextra

SRC = ft_cat.c

all : $(NAME)

$(NAME) :
	$(CC) $(FLAG) $(SRC) -o $(NAME)

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re :fclean all
