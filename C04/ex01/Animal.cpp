/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 20:27:55 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/05 12:50:16 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* default constructor */
Animal::Animal(void)
{
	type = "Animal";
	std::cout << GREEN << "Animal constructor is called" << RESET << std::endl;
}

/* destructor */
Animal::~Animal(void)
{
	std::cout <<"Animal Destructor is called" << std::endl;
}

/* copy constructor */
Animal::Animal(const Animal& other) { *this = other; }

/* copy assignment operator */
Animal&		Animal::operator=(const Animal& rhs)
{
	if (this != &rhs)
		type = rhs.type;
	return (*this);
}

void		Animal::makeSound(void) const
{
	std::cout << GREEN << "Sound of: " << type << RESET <<std::endl; 
}

std::string		Animal::getType(void) const { return type;}
