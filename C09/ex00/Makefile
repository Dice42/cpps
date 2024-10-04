# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/28 17:00:39 by mohammoh          #+#    #+#              #
#    Updated: 2024/10/04 10:41:04 by mohammoh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp BitcoinExchange.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

RM = rm -f

CPPFLAGS = -Wall -Wextra -Werror -g3 -std=c++98

# -fsanitize=address 
NAME = btc

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

run: $(NAME)
	./$(NAME) myDB.txt

clean:
	$(RM) $(OBJ)

fclean: 
	make clean
	$(RM) $(NAME)

re: $(NAME)
	make fclean
	make all

.PHONY: all run clean fclean re