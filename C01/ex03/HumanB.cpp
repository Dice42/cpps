/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 09:06:40 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/27 10:38:30 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack()
{
	if (!w)
		std::cout << "HumanB Dont have a weapon to attack with" << std::endl;
	else
		std::cout << "HumanB attacks with their" << this->w->getType() << std::endl;
}

HumanB::HumanB(std::string s) : name(s)
{
}
Human
void 	HumanB::setWeapon(Weapon w)
{
	this->w = &w;
}
