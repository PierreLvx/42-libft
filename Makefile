# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plavaux <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/05 11:13:35 by plavaux           #+#    #+#              #
#    Updated: 2014/11/05 11:25:54 by plavaux          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
# TODO: Wildcards are not allowed.
# Do something cleaner before delivering the project.
SRC = *.c
OBJ = *.o

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRC)
#	ar rc $(NAME)
#	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
