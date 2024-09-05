/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 10:18:39 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/05 22:20:41 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	type = "Dog";
	brain = new Brain();
	std::cout << YELLOW << "Dog constructor is called" << RESET << std::endl;
}

/* destructor */
Dog::~Dog(void)
{
	delete brain;
	std::cout << "Dog Destructor is called" << std::endl;
}

/* copy constructor */
Dog::Dog(const Dog& other): Animal()
{
	type = other.type;
	brain = new Brain(*other.brain);
}

/* copy assignment operator */
Dog&		Dog::operator=(const Dog& rhs)
{
	 if (this != &rhs)
    {
		/* free the existed brain */
        delete brain;
        type = rhs.type;
        brain = new Brain(*rhs.brain);
    }
	return (*this);
}

void		Dog::makeSound(void) const
{
	std::cout << YELLOW << "Huff! huff! Huffff!!!" << RESET <<std::endl; 
}

void		Dog::printIdeas(void)
{
	for(int i = 0; i < 100; i++)
		std::cout << brain->getBrainIdeas()[i] << std::endl;
}