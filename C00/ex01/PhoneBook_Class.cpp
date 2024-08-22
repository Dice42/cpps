/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_Class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 10:44:11 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/22 21:34:13 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook_Class.hpp"
# include <iostream>
# include <iomanip>

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
std::string	PhoneBook::resize_content(std::string str)
{
	if (str.size() > 9)
		str.resize(9), str + '.';
	else
		str + '.';
	return (str);
}

void		PhoneBook::search_contact(std::string user_index)
{
	std::string str[4];

	str[0] =  "Index"; str[1] = "First_Name"; str[2] = "Last_Name"; str[3] = "Nick_Name"; 
	for (int i = 0; i < 4; i++)
		std::cout << std::setw(10) << str[i] << "|";
	std::cout << std::endl;
	for (int i = 0; i < 9; i++)
	{
		std::cout << std::setw(10) << user_index << '|';
		std::cout << std::setw(10) << resize_content(PhoneBook::_contact[i].get_first_name()) << '|';
		std::cout << std::setw(10) << resize_content(PhoneBook::_contact[i].get_last_name()) << '|';
		std::cout << std::setw(10) << resize_content(PhoneBook::_contact[i].get_nickname()) << '|';
		std::cout << std::endl;
	}
}

void		PhoneBook::add_contact(Contact cont)
{
	/* contact information */
	// this->_contact[_index].set_first_name(cont.get_first_name());
	// this->_contact[_index].set_last_name(cont.get_last_name());
	// this->_contact[_index].set_nickname(cont.get_nickname());
	// this->_contact[_index].set_phone_num(cont.get_phone_num());
	// this->_contact[_index].set_secret(cont.get_secret());

	this->_contact[_index]= cont;
	this->_index++;
	if (this->_index == 8)
		this->_index = 0;
}