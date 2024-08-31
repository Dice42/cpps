/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:59:56 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/29 10:32:13 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdbool.h>
#include <fstream>

#define RESET   "\033[0m"
#define RED     "\033[31m"

bool	check_files(std::ifstream& infile, std::ofstream& outfile, std::string& new_file)
{

	infile.open(new_file.c_str());
	if (!infile.is_open())
	{
		std::cout << RED << "Error:" << RESET << " Cannot open file " << new_file <<std::endl;
		return (false);
	}
	outfile.open((new_file + ".replace").c_str());
	if (outfile.fail())
	{
		std::cout << RED << "Error:" << RESET << " OutFile cannot be open "  << std::endl;
		return (false);
	}
	return (true);
}

void	replace(std::ifstream& infile, std::ofstream& outfile, char **av)
{
    std::string cont;
    std::string str1 = av[2];
    std::string str2 = av[3];

    while (std::getline(infile, cont))
    {
        std::string result;
        size_t start = 0;
        size_t end = cont.find(str1);

        while (end != std::string::npos)
        {
            result.append(cont, start, end - start);
            result.append(str2);
            start = end + str1.length();
            end = cont.find(str1, start);
        }
        result.append(cont, start, std::string::npos);
        outfile << result << std::endl;
    }
}

int main(int ac, char **av)
{
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		new_file;

	if (ac == 4)
	{
		new_file = av[1];
		if (!check_files(infile, outfile, new_file))
			return (0);
		replace(infile, outfile, av);
		outfile.close();
		infile.close();
	}
	else
	{
		std::cout << RED << "Error: " << RESET <<  "Wrong number of parameters" << std::endl;
		return (0);
	}
	return (0);
}
