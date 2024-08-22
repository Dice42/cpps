# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/20 00:04:31 by mohammoh          #+#    #+#              #
#    Updated: 2024/08/20 00:28:51 by mohammoh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := megaphone

CXX := c++

CXXFLAGS := -Wall -Wextra -Werror -std=c++98

SRC := megaphone.cpp

all: $(NAME)

$(NAME): $(SRC)
	@$(CXX) -o $@ $(CXXFLAGS) $(SRC)

clean:
	@rm -rf $(NAME)

re: clean all