# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plavaux <plavaux@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/05 11:13:35 by plavaux           #+#    #+#              #
#    Updated: 2015/01/15 16:18:49 by plavaux          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SHELL = /bin/zsh

CC = cc
CFLAGS = -ansi -pedantic -Wall -Wextra -Werror
SRC =	ft_atoi.c \
		ft_bzero.c \
		ft_is{alnum,alpha,ascii,blank,digit,lower,num,print,space,upper}.c \
		ft_itoa.c \
		ft_mem{alloc,ccpy,chr,cmp,cpy,del,move,set}.c \
		ft_put{char,char_fd,endl,endl_fd,nbr,nbr_fd,str,str_fd}.c \
		ft_strcat.c \
		ft_strchr.c \
		ft_strclr.c \
		ft_strcmp.c \
		ft_strcpy.c \
		ft_strdel.c \
		ft_strdup.c \
		ft_strequ.c \
		ft_stris{alpha,lower,print,upper}.c \
		ft_str{iter,iteri}.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlen.c \
		ft_strlowcase.c \
		ft_strupcase.c \
		ft_str{map,mapi}.c \
		ft_strncat.c \
		ft_strncmp.c \
		ft_strncpy.c \
		ft_strndup.c \
		ft_strnequ.c \
		ft_strnew.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strsplit.c \
		ft_strstr.c \
		ft_strsub.c \
		ft_strtrim.c \
		ft_to{lower,upper}.c \
		ft_lst{add,del,delone,iter,map,new}.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) -c $? $(SRC)
	@ar rc $(NAME) $? $(OBJ)
	@ranlib $(NAME)
	@echo "\033[32mBuilt library.\033[0m"

clean:
	@/bin/rm -f $(OBJ)
	@echo "\033[32mCleaned up object files.\033[0m"

fclean: clean
	@/bin/rm $(NAME)
	@echo "\033[32mCleaned up compiled files.\033[0m"

re: fclean all

.PHONY: all clean fclean re
