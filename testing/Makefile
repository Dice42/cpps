# Program
NAME := megaphone


# Necessities
CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98

# Targets
SRC := main.cpp

# Rules
all: $(NAME)

$(NAME): $(SRC)
	@$(CXX) -o $@ $(CXXFLAGS) $(SRC)

clean:
	@rm -rf $(NAME)

re: clean all
