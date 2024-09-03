/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:38:49 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/03 21:04:08 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	setName(name);
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	std::cout << "ScavTrap Constructor is called" << std::endl;
}
ScavTrap::~ScavTrap(void) {std::cout << "ScavTrap Destructor is called" << std::endl;}
ScavTrap::ScavTrap(void) {std::cout << "ScavTrap Constructor is called" << std::endl;}
ScavTrap::ScavTrap(const ScavTrap& scavtrap) : ClapTrap() {*this = scavtrap;}
ScavTrap&	ScavTrap::operator=(const ScavTrap& scavtrap)
{
	setName(scavtrap.getName());
	setHitPoints(scavtrap.getHitPoints());
	setEnergyPoints(scavtrap.getEnergyPoints());
	setAttackDamage(scavtrap.getAttackDamage());
	return *this;
}
void		ScavTrap::attack(const std::string& target)
{
	if (getEnergyPoints() > 0 && getHitPoints() > 0)
	{
		std::cout << "ScavTrap " << getName() << " attacks " << target
				  << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
		setEnergyPoints(getEnergyPoints() - 1);
	}
	else
		std::cout << getName() << " No Energy to attack!" << std::endl;
}

void 		ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode." << std::endl;
}