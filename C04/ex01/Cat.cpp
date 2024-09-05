/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 10:16:55 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/05 13:56:33 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	type = "Cat";
	brain = new Brain();
	std::cout << RED << "Cat constructor is called" << RESET << std::endl;
}

/* destructor */
Cat::~Cat(void)
{
	delete brain;
	std::cout << "Cat Destructor is called" << std::endl;
}

/* copy constructor */
Cat::Cat(const Cat& other) : Animal()  { *this = other; }

/* copy assignment operator */
Cat&		Cat::operator=(const Cat& rhs)
{
	if (this != &rhs)
	{
		type = rhs.type;
		brain = rhs.brain;
	}
	return (*this);
}

void		Cat::makeSound(void) const
{
	std::cout << RED << "Meow! Meeeoooooow! Meow!!!" << RESET <<std::endl; 
}
