/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 10:55:51 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/05 11:00:40 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	type = "WrongCat";
	std::cout << RED << "WrongCat constructor is called" << RESET << std::endl;
}

/* destructor */
WrongCat::~WrongCat(void)
{
	std::cout << RED << "WrongCat Destructor is called" << RESET << std::endl;
}

/* copy constructor */
WrongCat::WrongCat(const WrongCat& other) : WrongAnimal()  { *this = other; }

/* copy assignment operator */
WrongCat&		WrongCat::operator=(const WrongCat& rhs)
{
	if (this != &rhs)
		type = rhs.type;
	return (*this);
}

void		WrongCat::makeSound(void) const
{
	std::cout << RED << "ROARRR!!!" << RESET <<std::endl; 
}
