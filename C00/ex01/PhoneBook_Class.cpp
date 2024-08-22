/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_Class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 10:44:11 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/22 12:29:46 by mohammoh         ###   ########.fr       */
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


/* (PhoneBook instance;)
	Contact temp;

	usr gimme name-> NAME

	temp.setName(NAME);

	usr gimme last-> LAST

	temp.setLast(LAST);

	.
	.
	.

	instance.add_contact(temp);
	

*/


void	PhoneBook::add_contact(Contact cont)
{
	/* contact information */
	// this->_contact[_index].set_first_name(cont.get_first_name());
	// this->_contact[_index].set_last_name(cont.get_last_name());
	// this->_contact[_index].set_nickname(cont.get_nickname());
	// this->_contact[_index].set_phone_num(cont.get_phone_num());
	// this->_contact[_index].set_secret(cont.get_secret());

	this->_contact[_index]/cont;
	
	std::cout << std::setiosflags (std::ios::showbase | std::ios::uppercase);
	
	std::cout << _contact[_index].get_first_name() << std::endl;
	std::cout << _contact[_index].get_last_name() << std::endl;
	std::cout << _contact[_index].get_nickname() << std::endl;
	std::cout << _contact[_index].get_phone_num() << std::endl;
	std::cout << _contact[_index].get_secret() << std::endl;
	this->_index++;
	if (this->_index == 8)
		this->_index = 0;
}