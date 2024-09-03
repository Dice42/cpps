/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:41:57 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/03 21:04:21 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	setName(name);
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "FragTrap Constructor is called" << std::endl;
}
FragTrap::FragTrap(void){}
FragTrap::FragTrap(const FragTrap& fragtrap) : ClapTrap() {*this = fragtrap;}
FragTrap&	FragTrap::operator=(const FragTrap& rhs)
{
	setName(rhs.getName());
	setHitPoints(rhs.getHitPoints());
	setEnergyPoints(rhs.getEnergyPoints());
	setAttackDamage(rhs.getAttackDamage());
	return (*this);
}
FragTrap::~FragTrap(void) {std::cout << "FragTrap Destructor is called" << std::endl;}

void		FragTrap::attack(const std::string& target)
{
	if (getEnergyPoints() > 0 && getHitPoints() > 0)
	{
		std::cout << "FragTrap " << getName() << " attacks " << target
				  << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
		setEnergyPoints(getEnergyPoints() - 1);
	}
	else
		std::cout << getName() << " No Energy to attack!" << std::endl;
}

void		FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << getName() << " high fives guys!" << std::endl;
}
