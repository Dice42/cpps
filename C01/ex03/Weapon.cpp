/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 07:52:06 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/27 10:07:50 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string&		Weapon::getType(void)
{
	return(_type);
}

void					Weapon::setType(std::string const  type)
{
	this->_type = type;
}

Weapon::Weapon(std::string w)
{
	setType(w);
}
Weapon::~Weapon(void){}