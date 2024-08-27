/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 09:06:40 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/27 12:43:33 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack()
{
	if (!_w)
		std::cout << "HumanB Dont have a weapon to attack with" << std::endl;
	else
		std::cout << "HumanB attacks with their " << this->_w->getType() << std::endl;
}

HumanB::HumanB(std::string s) : _name(s)
{
	this->_w = NULL;
}

void 	HumanB::setWeapon(Weapon &w)
{
	this->_w = &w;
}

HumanB::~HumanB(void){}
