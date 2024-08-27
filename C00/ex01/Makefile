# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/25 18:08:34 by mohammoh          #+#    #+#              #
#    Updated: 2024/08/27 11:08:19 by mohammoh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = PhoneBook.cpp PhoneBook_Utils.cpp Contact.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

RM = rm -f

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

NAME = PhoneBook

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

run: $(NAME)
	./$(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all run clean fclean re