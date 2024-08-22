#!/bin/bash

# Prompt the user for the program name
read -p "Enter the program name: " program_name

# Prompt the user for the source files
read -p "Enter the source files (space-separated): " source_files

touch $source_files
# Create the Makefile
cat <<EOL > Makefile
# Program
NAME := $program_name


# Necessities
CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98

# Targets
SRC := $source_files

# Rules
all: \$(NAME)

\$(NAME): \$(SRC)
	\$(CXX) -o \$@ \$(CXXFLAGS) \$(SRC)

clean:
	rm -rf \$(NAME)

re: clean all
EOL

cat <<EOL > main.cpp

#include <iostream>

int main() {
	std::cout << "Hello, World!" << std::endl;
	return 0;
}

EOL

echo "Makefile generated successfully."