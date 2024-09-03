/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:54:54 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/03 21:12:18 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	_name = name;
	setName(name + "_clap_name");
	setHitPoints(FragTrap::getHitPoints());
	setEnergyPoints(ScavTrap::getEnergyPoints());
	setAttackDamage(FragTrap::getAttackDamage());
	std::cout << GREEN << "DiamondTrap " << _name << " constructor is called" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(void){std::cout << GREEN << "DiamondTrap constructor is called" << RESET << std::endl;}
DiamondTrap::~DiamondTrap(void){std::cout << "DiamondTrap Destructor is called" << std::endl;}
DiamondTrap::DiamondTrap(const DiamondTrap& diamondtrap) : ClapTrap(), FragTrap(), ScavTrap()
{
	*this = diamondtrap;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		ClapTrap::operator=(rhs);
		ScavTrap::operator=(rhs);
		FragTrap::operator=(rhs);
		
	}
	// setName(rhs.getName());
	// setHitPoints(FragTrap::getHitPoints());
	// setEnergyPoints(ScavTrap::getEnergyPoints());
	// setAttackDamage(FragTrap::getAttackDamage());
	return  *this;
}
