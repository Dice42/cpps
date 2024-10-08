/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 10:18:39 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/05 10:30:15 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	type = "Dog";
	std::cout << YELLOW << "Dog constructor is called" << RESET << std::endl;
}

/* destructor */
Dog::~Dog(void)
{
	std::cout << YELLOW << "Dog Destructor is called" << RESET << std::endl;
}

/* copy constructor */
Dog::Dog(const Dog& other): Animal() { *this = other; }

/* copy assignment operator */
Dog&		Dog::operator=(const Dog& rhs)
{
	if (this != &rhs)
		type = rhs.type;
	return (*this);
}

void		Dog::makeSound(void) const
{
	std::cout << YELLOW << "Huff! huff! Huffff!!!" << RESET <<std::endl; 
}
