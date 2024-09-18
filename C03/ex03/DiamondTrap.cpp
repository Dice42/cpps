/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:54:54 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/18 16:47:46 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

	using namespace std;
/* constructor with string parameter */
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(), ScavTrap()
{
	this->_name = name;
	this->ClapTrap::_name = name + "_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;

	cout << "frag :" << FragTrap::_attackDamage << endl;
	cout << "scav :" << ScavTrap::_attackDamage << endl;
	cout << "clap :" << ClapTrap::_attackDamage << endl;
	cout << "daim :" << _attackDamage << endl;
	std::cout << RED << "DiamondTrap " << _name << " constructor is called" << RESET << std::endl;
}

/* constructor */
DiamondTrap::DiamondTrap(void) : ClapTrap("ClapTrap_clap_name"), FragTrap(), ScavTrap()
{
	this->_name = "DiamondTrap";
	this->ClapTrap::_name = "ClapTrap_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << RED << "DiamondTrap constructor is called" << RESET << std::endl;
}

/* Destructor */
DiamondTrap::~DiamondTrap(void){std::cout << RED << "DiamondTrap Destructor is called" << RESET << std::endl;}

/* copy constructor */
DiamondTrap::DiamondTrap(const DiamondTrap& diamondtrap) : ClapTrap(), FragTrap(), ScavTrap() {*this = diamondtrap;}

/* copy assignment operator*/
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->ClapTrap::_name = rhs.ClapTrap::_name;
		this->_hitPoints = rhs.FragTrap::_hitPoints;
		this->_energyPoints = rhs.ScavTrap::_energyPoints;
		this->_attackDamage = rhs.FragTrap::_attackDamage;
	}
	return  *this;
}

void	DiamondTrap::whoAmI()
{
	std::cout << RED << "DiamondTrap name: " << _name << RESET << GREEN << " ClapTrap name: "
											 << this->ClapTrap::_name << RESET << std::endl;
}