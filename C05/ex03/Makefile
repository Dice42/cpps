# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/08 09:16:33 by mohammoh          #+#    #+#              #
#    Updated: 2024/09/14 19:03:35 by mohammoh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = main.cpp Intern.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp  

OBJ = $(SRC:.cpp=.o)

CC = c++

RM = rm -f

CPPFLAGS = -Wall -Wextra -Werror  -std=c++98 #-fsanitize=address -g3

NAME = Form

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

run: $(NAME)
	./$(NAME)
	 
valgrind: $(NAME)
	valgrind  --leak-check=full --show-leak-kinds=all ./$(NAME) 

clean:
	$(RM) $(OBJ)

fclean: 
	make clean
	$(RM) $(NAME)

re: $(NAME)
	make fclean
	make all

.PHONY: all run valgrind clean fclean re