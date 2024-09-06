/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ++4 <mohammoh@student.42abudhabi.ae>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 10:18:39 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/06 10:31:02 by ++4              ###   ########.fr       */
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
	std::cout << YELLOW << "wooof! wooof! wooofff!!!" << RESET <<std::endl; 
}

void		Dog::printIdeas(void)
{
	for(int i = 0; i < 100; i++)
		std::cout << brain->getBrainIdeas()[i] << std::endl;
}