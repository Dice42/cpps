/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:37:04 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/23 23:16:38 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main (void)
{
	PhoneBook 	phonebook;
	// std::string line;

	// while (line != "EXIT")
	// {
	// 	std::cout << "Enter a command: " << std::endl;
	// 	std::getline(std::cin, line);
	// 	if (line == "ADD" || line == "add")
	// 		phonebook.check_contact_info(line);
	// 	else if (line == "SEARCH" || line == "search")
	// 	{
	// 		phonebook.list_table();
	// 		std::cout << "Enter an index to display user info: " << std::endl;
	// 		std::getline(std::cin, line);
	// 		phonebook.search_contact(line);
	// 	}
	// 	if (std::cin.eof())
	// 	{
	// 		std::cout << std::endl;
	// 		return (0);
	// 	}
	// }
	phonebook.ft_start();
	return (0);
}