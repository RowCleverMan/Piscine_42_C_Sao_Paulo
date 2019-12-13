# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: robitett <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/08 22:30:54 by robitett          #+#    #+#              #
#    Updated: 2019/12/10 10:39:27 by robitett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
SRC = check_number.c main.c mod_3.c places.c read_search.c type_number.c utils_function.c
INCL = numbers.h

all: $(NAME)

$(NAME):
	cc -Wall -Wextra -Werror -I $(INCL) -o $(NAME) $(SRC)

clean:
	rm -f *.o

fclean:
	rm -f $(NAME)

re: clean all

