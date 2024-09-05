/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 10:54:07 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/05 10:54:22 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/* default constructor */
WrongAnimal::WrongAnimal(void)
{
	type = "WrongAnimal";
	std::cout << RED << "WrongAnimal constructor is called" << RESET << std::endl;
}

/* destructor */
WrongAnimal::~WrongAnimal(void)
{
	std::cout << RED << "WrongAnimal Destructor is called" << RESET << std::endl;
}

/* copy constructor */
WrongAnimal::WrongAnimal(const WrongAnimal& other) { *this = other; }

/* copy assignment operator */
WrongAnimal&		WrongAnimal::operator=(const WrongAnimal& rhs)
{
	if (this != &rhs)
		type = rhs.type;
	return (*this);
}

void		WrongAnimal::makeSound(void) const
{
	std::cout << RED << "Sound of: " << type << RESET <<std::endl; 
}

std::string		WrongAnimal::getType(void) const { return type;}
