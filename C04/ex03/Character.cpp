/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 20:23:44 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/06 22:49:36 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		m[i] = NULL;
	std::cout << "character	constructor is called" << std::endl;
}

Character::~Character(void){}
Character::Character(const Character& other){}
Character&			Character::operator=(const Character& rhs){}
std::string const & Character::getName() const {}

void				Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (m[i] == NULL)
			break;
	}
	
}
void 				Character::unequip(int idx) {}
void 				Character::use(int idx, ICharacter& target) {}