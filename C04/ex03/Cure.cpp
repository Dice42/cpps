/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 17:01:25 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/06 19:45:01 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void): AMateria("cure")
{
	std::cout << "Cure constructor is called" << std::endl;
}

Cure::Cure(const Cure& other) : AMateria(other._type)
{
	*this = other;
}

Cure&	Cure::operator=(const Cure& rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

Cure::~Cure(void)
{
	std::cout << "Cure destructor is called" << std::endl;
}

AMateria* 	Cure::clone() const
{
	AMateria *New = new Cure;
	return (New);
}

// void		Cure::use(ICharacter& target)
// {
// 	std::cout << "* heals " << target << "'s wounds *" << std::endl;
// }