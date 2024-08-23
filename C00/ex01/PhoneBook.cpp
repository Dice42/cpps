/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 10:44:11 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/23 23:21:32 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _index(0)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

/**
 * @brief this function resize the content and then adds a dot
 * 	at the end of the string
 * @param str 
 * @return std::string 
 */
std::string	PhoneBook::resize_content(std::string const str)
{
	std::string temp;

	temp = str;
	if (temp.size() > 9)
		temp.resize(9), temp += '.';
	return (temp);
}

void		PhoneBook::search_contact(std::string user_index)
{
	if (user_index.size() > 2 || (user_index < "0" || user_index > "9"))
	{
		std::cout << "Wrong Index!, Please enter a valid Index to Display the user info" << std::endl;
		return ;
	}
	std::cout << "First Name     : " << _contact[std::atoi(user_index.c_str()) - 1].get_first_name() << std::endl;
	std::cout << "Last Name      : " << _contact[std::atoi(user_index.c_str()) - 1].get_last_name() << std::endl;
	std::cout << "Nick Name      : " << _contact[std::atoi(user_index.c_str()) - 1].get_nickname() << std::endl;
	std::cout << "Phone Number   : " << _contact[std::atoi(user_index.c_str()) - 1].get_phone_num() << std::endl;
	std::cout << "Darkest Secret : " << _contact[std::atoi(user_index.c_str()) - 1].get_secret() << std::endl;
}

void		PhoneBook::list_table(void)
{
	std::string	str[4];
	
	std::cout << "---------------------------------------------" << std::endl;
	str[0] =  "Index"; str[1] = "First_Name"; str[2] = "Last_Name"; str[3] = "Nick_Name"; 
	std::cout << "|";
	for (int i = 0; i < 4; i++)
		std::cout << std::setw(10) << str[i] << "|";
	std::cout << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int i = 0; i < 8 ; i++)
	{
		std::cout << "|" << std::setw(10) << i + 1 << '|';
		std::cout << std::setw(10) << resize_content(PhoneBook::_contact[i].get_first_name()) << '|';
		std::cout << std::setw(10) << resize_content(PhoneBook::_contact[i].get_last_name()) << '|';
		std::cout << std::setw(10) << resize_content(PhoneBook::_contact[i].get_nickname()) << '|';
		std::cout << std::endl;
	}
	std::cout << "---------------------------------------------" << std::endl;
}

void		PhoneBook::check_contact_info(std::string line)
{
	Contact	temp;

	if (!check_first_name(line, temp))
		return ;	
	if (!check_last_name(line, temp))
		return ;	
	if (!check_nick_name(line, temp))
		return ;	
	if (!check_phone_num(line, temp))
		return ;	
	if (!check_secret(line, temp))
		return ;	
	add_contact(temp);
	return ;
}

void		PhoneBook::add_contact(Contact cont)
{
	this->_contact[_index]= cont;
	this->_index++;
	if (this->_index == 8)
		this->_index = 0;
}

void		PhoneBook::ft_start(void)
{
	std::string line;

	while (line != "EXIT" || line != "exit")
	{
		std::cout << "Enter a command: " << std::endl;
		std::getline(std::cin, line);
		if (line == "ADD" || line == "add")
			check_contact_info(line);
		else if (line == "SEARCH" || line == "search")
		{
			list_table();
			std::cout << "Enter an index to display user info: " << std::endl;
			std::getline(std::cin, line);
			search_contact(line);
		}
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return ;
		}
	}
}