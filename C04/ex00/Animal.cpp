/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 20:27:55 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/04 21:16:06 by mohammoh         ###   ########.fr       */
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
	std::cout << GREEN << "Animal Destructor is called" << RESET << std::endl;
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
