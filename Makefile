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

COLLEEN = Colleen

GRACE = Grace

ifeq ($(HOSTTYPE),)
	HOSTTYPE := $(shell uname -m)_$(shell uname -s)
endif

WFLAGS = -Wall -Wextra -Werror

CC = gcc 


SRCGRACE = 	\
		Grace.c

SRCCOLLEEN = 	\
		Colleen.c 

INCLUDE = -I includes/


all : $(COLLEEN) $(GRACE) 

$(COLLEEN) :  $(SRCCOLEEN)
	$(CC) -o  $(COLLEEN) $(SRCCOLLEEN) $(LIBFLAG) $(WFLAGS) $(INCLUDE) 

$(GRACE) :  $(SRCGRACE)
	$(CC) -o  $(GRACE) $(SRCGRACE) $(LIBFLAG) $(WFLAGS) $(INCLUDE) 

clean :
	echo 'clean'

fclean : clean
	echo 'fclean'
	rm -rf $(NAME)

re: fclean all

