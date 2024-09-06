/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 16:51:08 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/06 22:23:16 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	// _type = type;
	std::cout << "AMateria constructor is called" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
	_type = type;
	std::cout << "AMateria constructor is called" << std::endl;
}

/* copy constructor */
AMateria::AMateria(const AMateria & other)
{
	*this = other;
}

AMateria&		AMateria::operator=(const AMateria& rhs)
{
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria destructor is called" << std::endl;
}

std::string const & AMateria::getType() const
{
	return (_type);
} //Returns the materia type
