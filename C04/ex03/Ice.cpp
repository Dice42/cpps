/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 17:02:21 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/07 18:38:11 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void): AMateria("ice") {}

Ice::Ice(const Ice& other) : AMateria(other)
{
	*this = other;
}

Ice&	Ice::operator=(const Ice& rhs)
{
	if (this != &rhs)
		AMateria::operator=(rhs);
	return (*this);
}

Ice::~Ice(void) {}

AMateria* 	Ice::clone() const
{
	return (new Ice);
}

void		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at < " << target.getName() << " *" << std::endl;
}