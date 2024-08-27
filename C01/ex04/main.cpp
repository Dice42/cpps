/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:59:56 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/27 18:57:09 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	std::ifstream 	infile;
	std::ofstream	outfile;
	std::fstream	temp;
	std::ifstream	temp_in;
	std::string		new_file;

	if (ac == 4)
	{
		new_file = av[1];
		
		infile.open(av[1]);
		if (!infile.is_open())
		{
			std::cout << "File cannot be open " << std::endl;
			return (0);
		}
		outfile.open((new_file+ ".replace").c_str());
		if (outfile.fail())
		{
			std::cout << "outFile cannot be open " << std::endl;
			return (0);
		}
		std::string	cont;
		while (!infile.eof())
		{
			temp.open("temp.txt");
			std::getline(infile, cont);
			temp << cont << std::endl;
			temp.close();
			temp.open("temp.txt");
			while (temp.eof())
			{
				temp >> cont;
				if (cont == av[2])
					outfile << av[3];
				else
					outfile << cont;
				outfile << " ";
			}
			outfile << std::endl;
		}
		outfile.close();
		infile.close();
	}
	else
	{
		std::cout << "wrong number of parameters" << std::endl;
		return (0);
	}
	return (0);
}
