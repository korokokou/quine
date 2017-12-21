# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: takiapo <takiapo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/20 21:45:12 by takiapo           #+#    #+#              #
#*   Updated: 2017/12/21 01:04:43 by                  ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

SULLY = Sully

COLLEEN = Colleen

GRACE = Grace

ifeq ($(HOSTTYPE),)
	HOSTTYPE := $(shell uname -m)_$(shell uname -s)
endif

WFLAGS = -Wall -Wextra -Werror

CC = gcc 


SRCGRACE = 	\
		Grace.c

SRCSULLY = 	\
		Sully.c 

INCLUDE = -I includes/


all : $(COLLEEN) $(GRACE) $(SULLY)

$(COLLEEN) :  $(SRCCOLEEN)
	$(CC) -o  $(COLLEEN) $(SRCCOLLEEN) $(LIBFLAG) $(WFLAGS) $(INCLUDE) 

$(GRACE) :  $(SRCGRACE)
	$(CC) -o  $(GRACE) $(SRCGRACE) $(LIBFLAG) $(WFLAGS) $(INCLUDE) 
$(SULLY) :  $(SRCSULLY)
	$(CC) -o  $(GRACE) $(SRCGRACE) $(LIBFLAG) $(WFLAGS) $(INCLUDE) 
clean :
	echo 'clean'

fclean : clean
	echo 'fclean'
	rm -rf $(NAME)

re: fclean all

