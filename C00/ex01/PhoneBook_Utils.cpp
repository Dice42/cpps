/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_Utils.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:27:20 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/23 22:33:04 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

bool		PhoneBook::check_first_name(std::string line, Contact& temp)
{
	std::cout << "Enter a first_name: " << std::endl;
	if (!std::getline(std::cin, line))
		return (false);
	if (!line.c_str() || line.size() == 0)
	{
		std::cout << "please enter a valid first name" << std::endl << std::endl;
		return (false);
	}	
	temp.set_first_name(line);
	return (true);
}

bool		PhoneBook::check_last_name(std::string line, Contact& temp)
{
	std::cout << "Enter a last_name: " << std::endl;
	std::getline(std::cin, line);
	if (!line.c_str() || line.size() == 0 )
	{
		std::cout << "please enter a valid last name" << std::endl << std::endl;
		return (false);
	}
	temp.set_last_name(line);
	return (true);
}

bool		PhoneBook::check_nick_name(std::string line, Contact& temp)
{
	std::cout << "Enter a nick_name: " << std::endl;
	std::getline(std::cin, line);
	if (!line.c_str() || line.size() == 0)
	{
		std::cout << "please enter a valid nick name" << std::endl << std::endl;
		return (false);
	}
	temp.set_nickname(line);
	return (true);
}

bool		PhoneBook::check_phone_num(std::string line, Contact& temp)
{
	bool	isdigit;
	
	isdigit = true;
	std::cout << "Enter a phone number: " << std::endl;
	std::getline(std::cin, line);
	for (int i = 0; line[i]; i++)
	{
		if (!std::isdigit(line[i]))
			isdigit = false;
	}
	if (!isdigit || !line.c_str() || line.size() == 0)
	{
		std::cout << "please enter a valid phone number" << std::endl << std::endl;
		return (false);
	}
	temp.set_phone_num(line);
	return (true);
}

bool		PhoneBook::check_secret(std::string line, Contact& temp)
{
	std::cout << "Enter your darkest secret" << std::endl;
	std::getline(std::cin, line);
	if (!line.c_str())
	{
		std::cout << "please enter a valid secret" << std::endl << std::endl;
		return (false);
	}
	temp.set_secret(line);
	return (true);
}