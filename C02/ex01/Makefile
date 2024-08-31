# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/30 15:52:47 by mohammoh          #+#    #+#              #
#    Updated: 2024/08/30 15:52:49 by mohammoh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Fixed.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

RM = rm -f

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = FixedPoint

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

re: $(NAME)
	make fclean
	make all

.PHONY: all run clean fclean re