/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:37:04 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/22 21:31:31 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook_Class.hpp"
#include "Contact_Class.hpp"
#include <iostream>
#include <string>
# include <iomanip>


/* we sent temp which the a reference to the actual object 
	we prefer sending refrenceing rather than sending pointers 
	this is something C doesnt have */

void	add_contact_info(Contact& temp, std::string line)
{
	std::cout << "Enter a first_name: " << std::endl;
	std::getline(std::cin, line);
	temp.set_first_name(line);
	std::cout << "Enter a last_name: " << std::endl;
	std::getline(std::cin, line);
	temp.set_last_name(line);
	std::cout << "Enter a nick_name: " << std::endl;
	std::getline(std::cin, line);
	temp.set_nickname(line);
	std::cout << "Enter a phone_number: " << std::endl;
	std::getline(std::cin, line);
	temp.set_phone_num(line);
	std::cout << "Enter your darkest secret: " << std::endl;
	std::getline(std::cin, line);
	temp.set_secret(line);
}

int main (void)
{
	PhoneBook phonebook;
	Contact temp;
	std::string line;

	/*
		On program start-up, the phonebook is empty and the user is prompted to enter one
		of three commands. The program only accepts ADD, SEARCH and EXIT.
	*/	
	while (line != "EXIT")
	{
		std::cout << "Enter a command: " << std::endl;
		std::getline(std::cin, line);
		if (line == "ADD")
		{
			/* add function */
			add_contact_info(temp, line);
			phonebook.add_contact(temp);
			//DO SOMETHING 
		}
		else if (line == "SEARCH")
		{
			std::string str[4];

			str[0] =  "Index"; str[1] = "First_Name"; str[2] = "Last_Name"; str[3] = "Nick_Name"; 
			for (int i = 0; i < 4; i++)
			std::cout << std::setw(10) << str[i] << "|";
			std::cout << std::endl;
			/* search function */
			std::string	line;
			std::getline(std::cin, line);
			phonebook.search_contact(line);
			//DO SOMETHING
		}
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (0);
		}
	}
	return (0);
}