/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 17:02:21 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/06 18:28:52 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void): AMateria("ice")
{
	std::cout << "Ice constructor is called" << std::endl;
}

Ice::Ice(const Ice& other) : AMateria(other._type)
{
	*this = other;
}

Ice&	Ice::operator=(const Ice& rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

Ice::~Ice(void)
{
	std::cout << "Ice destructor is called" << std::endl;
}

AMateria* 	Ice::clone() const
{
	AMateria *New = new Ice;
	return (New);
}