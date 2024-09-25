/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 20:23:44 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/07 18:23:34 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		m[i] = NULL;
	// std::cout << "character	constructor is called" << std::endl;
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (m[i] != NULL)
			delete m[i];
	}
	// std::cout << "character	destructor is called" << std::endl;	
}

Character::Character(const Character& other) : _name(other._name)
{
	for (int i = 0; i < 4; ++i)
	{
		if (other.m[i])
			m[i] = other.m[i]->clone();
		else
			m[i] = NULL;
    }
}

Character&			Character::operator=(const Character& rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		for (int i = 0; i < 4; i++)
		{
			delete m[i];
			if (rhs.m[i])
				this->m[i] = rhs.m[i]->clone();
			else
				this->m[i] = NULL;
		}
	}
	return (*this);
}

std::string const & Character::getName() const {return _name;}

void				Character::equip(AMateria* m)
{
	if (!m)
        return;
	for (int i = 0; i < 4; i++)
	{
		if (this->m[i] == NULL)
		{
			this->m[i] = m;
			break;
		}
	}
}

void 				Character::unequip(int idx)
{
	 if (idx >= 0 && idx < 4)
        	m[idx] = NULL;
}

void 				Character::use(int idx, ICharacter& target)
{
	  if (idx >= 0 && idx < 4 && m[idx])
			m[idx]->use(target);
}