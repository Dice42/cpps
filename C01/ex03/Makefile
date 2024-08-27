# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/27 07:42:15 by mohammoh          #+#    #+#              #
#    Updated: 2024/08/27 10:57:23 by mohammoh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

RM = rm -f

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

NAME = attack

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

run: $(NAME)
	./$(NAME)

clean:
	$(RM) $(OBJ)

fclean: 
	make clean
	$(RM) $(NAME)

re: 
	make fclean
	make all

.PHONY: all run clean fclean re