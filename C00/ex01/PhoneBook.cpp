/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 10:44:11 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/27 10:49:09 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _index(0)
{
	std::cout << CYAN << "╔══════════════════════════════════════════════════════════════════╗" << std::endl;
    std::cout << CYAN << "║" << RESET << YELLOW << " Welcome to the 80s! Experience the magic of retro technology.    " << CYAN << "║" << std::endl;
    std::cout << CYAN << "║" << RESET << GREEN  << " This awesome phonebook software stores your contacts with style. " << CYAN << "║" << std::endl;
	std::cout << CYAN << "║" << RESET << BLUE   << " Welcome! Navigate through the phonebook using these commands:    " << CYAN << "║" << std::endl;
    std::cout << CYAN << "║" << RESET << GREEN  << "  • " << BLUE << "ADD" << RESET << WHITE << "    - Add a new contact.        " << CYAN << std::setw(30) << "║" << std::endl;
    std::cout << CYAN << "║" << RESET << GREEN  << "  • " << BLUE << "SEARCH" << RESET << WHITE << " - Search and view contacts. " << CYAN << std::setw(30) << "║" << std::endl;
    std::cout << CYAN << "║" << RESET << GREEN  << "  • " << BLUE << "EXIT" << RESET << WHITE << "   - Quit the program.         " << CYAN << std::setw(30) << "║" << std::endl;
    std::cout << CYAN << "╚══════════════════════════════════════════════════════════════════╝" << RESET << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
    std::cout << MAGENTA << "╔══════════════════════════════════════════════════════════╗" << std::endl;
    std::cout << MAGENTA << "║" << RESET << YELLOW << " Goodbye! You've just experienced a blast from the past.  " << MAGENTA << "║" << std::endl;
    std::cout << MAGENTA << "║" << RESET << GREEN  << " Thank you for using our awesome 80s-style phonebook.     " << MAGENTA << "║" << std::endl;
    std::cout << MAGENTA << "║" << RESET << BLUE   << " See you next time for another retro adventure!           " << MAGENTA << "║" << std::endl;
    std::cout << MAGENTA << "╚══════════════════════════════════════════════════════════╝" << RESET << std::endl;
    return ;
}

/**
 * @brief this function resize the content and then adds a dot
 * 	at the end of the string
 * @param str 
 * @return std::string 
 */
std::string	PhoneBook::_resize_content(std::string const str)
{
	std::string temp;

	temp = str;
	if (temp.size() > 9)
		temp.resize(9), temp += '.';
	return (temp);
}

void		PhoneBook::_search_contact(std::string user_index)
{
	if (user_index.size() > 1 || user_index < "1" || user_index > "8")
	{
		std::cout << RED << "Wrong Index!, Please enter a valid Index to Display the user info. Please try again." << RESET << std::endl;
		return ;
	}
	std::cout << BLUE << "First Name     : " << RESET << _contact[std::atoi(user_index.c_str()) - 1].get_first_name() << std::endl;
	std::cout << BLUE << "Last Name      : " << RESET << _contact[std::atoi(user_index.c_str()) - 1].get_last_name() << std::endl;
	std::cout << BLUE << "Nick Name      : " << RESET << _contact[std::atoi(user_index.c_str()) - 1].get_nickname() << std::endl;
	std::cout << BLUE << "Phone Number   : " << RESET << _contact[std::atoi(user_index.c_str()) - 1].get_phone_num() << std::endl;
	std::cout << BLUE << "Darkest Secret : " << RESET << _contact[std::atoi(user_index.c_str()) - 1].get_secret() << std::endl;
}

void		PhoneBook::list_table(void)
{
	std::string	str[4];
	
	std::cout << CYAN << "╔═════════════════════════════════════════════════════════════════╗" << std::endl;
    std::cout << CYAN << "║" << RESET << GREEN << "  You've entered the search mode! Here's a list of contacts:   " << CYAN << "║" << std::endl;
    std::cout << CYAN << "║" << RESET << YELLOW << "  Select an index to view the detailed information.            " << CYAN << "║" << std::endl;
    std::cout << CYAN << "╚═════════════════════════════════════════════════════════════════╝" << RESET << std::endl;

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
		std::cout << std::setw(10) << _resize_content(PhoneBook::_contact[i].get_first_name()) << '|';
		std::cout << std::setw(10) << _resize_content(PhoneBook::_contact[i].get_last_name()) << '|';
		std::cout << std::setw(10) << _resize_content(PhoneBook::_contact[i].get_nickname()) << '|';
		std::cout << std::endl;
	}
	std::cout << "---------------------------------------------" << std::endl;
}

void		PhoneBook::_check_contact_info(std::string line)
{
	Contact	temp;

	std::cout << BLUE << "╔═══════════════════════════════════════════════════════════════════════════╗" << std::endl;
	std::cout << BLUE << "║" << RESET << LCYAN << " You've chosen to add a new contact. Please provide the required details." << BLUE << "  ║" << std::endl;
	std::cout << BLUE << "║" << RESET << LCYAN << " Kindly avoid leaving any fields empty, or you'll be prompted to retry." << BLUE << "    ║" << std::endl;
	std::cout << BLUE << "╚═══════════════════════════════════════════════════════════════════════════╝" << RESET << std::endl; 
	
	if (!_check_first_name(line, temp))
		return ;	
	if (!_check_last_name(line, temp))
		return ;	
	if (!_check_nick_name(line, temp))
		return ;	
	if (!_check_phone_num(line, temp))
		return ;	
	if (!_check_secret(line, temp))
		return ;	
	_add_contact(temp);
	return ;
}

void		PhoneBook::_add_contact(Contact cont)
{
	this->_contact[_index]= cont;
	this->_index++;
	if (this->_index == 8)
		this->_index = 0;
}

void		PhoneBook::ft_start(void)
{
	std::string line;

	while (1)
	{
		if (std::cin.eof() || line == "EXIT")
		{
			std::cout << std::endl;
			break;
		}
		std::cout << "Enter a command: " << std::endl;
		std::getline(std::cin, line);
		if (line == "ADD")
			_check_contact_info(line);
		else if (line == "SEARCH")
		{
			list_table();
			std::cout << "Enter an index to display user info: " << std::endl;
			std::getline(std::cin, line);
			_search_contact(line);
		}
		else
			std::cout << YELLOW << "Wrong Command!, try again!" << RESET << std::endl;
	}
	return ;
}
