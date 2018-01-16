# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/18 12:07:59 by cmalfroy          #+#    #+#              #
#    Updated: 2017/07/19 14:10:38 by cmalfroy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAG = -Wall -Werror -Wextra

CC = gcc

PATH = ./srcs/

HEADER = ./includes/

SRC = $(PATH)ft_strlen.c $(PATH)ft_putchar.c $(PATH)ft_putstr.c $(PATH)ft_strcmp.c $(PATH)ft_swap.c

OBJET = ft_strlen.o ft_putchar.o ft_putstr.o ft_strcmp.o ft_swap.o

OPTION = -c -I $(HEADER)

all: $(NAME)

$(NAME):
	$(CC) $(FLAG) $(OPTION) $(SRC) 
	ar rc $(NAME) $(OBJET)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
