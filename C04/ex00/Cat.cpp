/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 10:16:55 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/05 10:30:55 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	type = "Cat";
	std::cout << BLUE << "Cat constructor is called" << RESET << std::endl;
}

/* destructor */
Cat::~Cat(void)
{
	std::cout << BLUE << "Cat Destructor is called" << RESET << std::endl;
}

/* copy constructor */
Cat::Cat(const Cat& other) : Animal()  { *this = other; }

/* copy assignment operator */
Cat&		Cat::operator=(const Cat& rhs)
{
	if (this != &rhs)
		type = rhs.type;
	return (*this);
}

void		Cat::makeSound(void) const
{
	std::cout << BLUE << "Meow! Meeeoooooow! Meow!!!" << RESET <<std::endl; 
}
