/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:38:49 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/18 15:34:50 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* constructor with string parameter */
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	// this->_hitPoints = 100;
	this->_energyPoints = 50;
	// this->_attackDamage = 20;
	std::cout << YELLOW << "ScavTrap Constructor is called" << RESET << std::endl;
}

/* constructor */
ScavTrap::ScavTrap(void) : ClapTrap()
{
	this->_name = "ScavTrap";
	// this->_hitPoints = 100;
	this->_energyPoints = 50;
	// this->_attackDamage = 20;
	std::cout << YELLOW << "ScavTrap Constructor is called" << RESET <<std::endl;
}

/* copy constructor */
ScavTrap::ScavTrap(const ScavTrap& scavtrap) : ClapTrap() {*this = scavtrap;}

/* copy assignemt operator */
ScavTrap&	ScavTrap::operator=(const ScavTrap& rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		// this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		// this->_attackDamage = rhs._attackDamage;	
	}
	return *this;
}

/* destructor */
ScavTrap::~ScavTrap(void) {std::cout << YELLOW << "ScavTrap Destructor is called" << RESET << std::endl;}

void		ScavTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << YELLOW << "ScavTrap " << RESET << _name << " attacks " << target
				  << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints -= 1;
	}
	else
		std::cout << YELLOW << _name << RESET << " No Energy to attack!" << std::endl;
}

void 		ScavTrap::guardGate()
{
	std::cout << YELLOW << "ScavTrap " << RESET << _name << " is now in Gate keeper mode." << std::endl;
}