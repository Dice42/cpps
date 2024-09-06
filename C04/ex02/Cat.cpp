/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 10:16:55 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/06 16:28:27 by mohammoh         ###   ########.fr       */
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
Cat::Cat(const Cat& other) : Animal()
{
	type = other.type;
	brain = new Brain(*other.brain);
}

/* copy assignment operator */
Cat&		Cat::operator=(const Cat& rhs)
{
	if (this != &rhs)
	{
		delete brain;
		type = rhs.type;
		brain = new Brain(*rhs.brain);
	}
	return (*this);
}

void		Cat::makeSound(void) const
{
	std::cout << RED << "Meow! Meeeoooooow! Meow!!!" << RESET <<std::endl; 
}

void		Cat::printIdeas(void)
{
	for(int i = 0; i < 100; i++)
		std::cout << brain->getBrainIdeas()[i] << std::endl;
}

std::string		Cat::getType(void) const { return type;}
