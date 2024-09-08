/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 16:51:08 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/07 18:19:12 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type) {}

/* copy constructor */
AMateria::AMateria(const AMateria & other) : _type(other._type) {}

AMateria&		AMateria::operator=(const AMateria& rhs)
{
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

AMateria::~AMateria(void){}

std::string const & AMateria::getType() const
{
	return (_type);
}

void 	AMateria::use(ICharacter& target)
{
    std::cout << "* uses materia on " << target.getName() << " *" << std::endl;
}