# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: romanbtt <marvin@student.42sp.org.br>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/15 17:03:51 by romanbtt          #+#    #+#              #
#    Updated: 2020/11/15 17:04:19 by romanbtt         ###   ########.fr        #
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

