# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: takiapo <takiapo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/20 21:45:12 by takiapo           #+#    #+#              #
#*   Updated: 2016/12/19 09:19:01 by                  ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME = Colleen

ifeq ($(HOSTTYPE),)
	HOSTTYPE := $(shell uname -m)_$(shell uname -s)
endif

WFLAGS = -Wall -Wextra -Werror -g

CC = gcc 


SRC = 	\
		Colleen.c 

INCLUDE = -I includes/


all : $(NAME)

$(NAME) :  $(SRC)
	$(CC) -g -o  $(NAME) $(SRC) $(LIBFLAG) $(WFLAGS) $(INCLUDE) 

clean :
	echo 'clean'

fclean : clean
	echo 'fclean'
	rm -rf $(NAME)

re: fclean all

