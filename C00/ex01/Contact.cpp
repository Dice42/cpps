/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 10:45:09 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/23 12:31:39 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

/* constructor */
Contact::Contact(void)
{
	return ;
}

/* destructor */
Contact::~Contact(void)
{
	return ;
}

Contact& Contact::operator=(const Contact& rhs)
{
	this->_first_name = rhs.get_first_name();
	this->_last_name = rhs.get_last_name();
	this->_nickname = rhs.get_nickname();
	this->_phone_number = rhs.get_phone_num();
	this->_secret = rhs.get_secret();
	return *this;
}

/* setters */
void	Contact::set_first_name(std::string str)
{
	this->_first_name = str;
}

void	Contact::set_last_name(std::string str)
{
	this->_last_name = str;
}

void	Contact::set_nickname(std::string str)
{
	this->_nickname = str;
}

void	Contact::set_phone_num(std::string str)
{
	this->_phone_number = str;
}

void	Contact::set_secret(std::string str)
{
	this->_secret = str;
}

/* getters */
std::string	Contact::get_first_name(void) const
{
	return (this->_first_name);
}

std::string	Contact::get_last_name(void) const
{
	return (this->_last_name);
}

std::string	Contact::get_nickname(void) const
{
	return (this->_nickname);
}

std::string	Contact::get_phone_num(void) const
{
	return (this->_phone_number);
}

std::string	Contact::get_secret(void) const
{
	return (this->_secret);
}
