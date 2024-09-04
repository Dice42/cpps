/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:38:45 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/04 13:13:58 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*constructor*/
ClapTrap::ClapTrap(void) : _name("ClapTrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{std::cout << GREEN << "ClapTrap Constructor is called" << RESET << std::endl;}

/*constructor with string parameter*/
ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{std::cout << GREEN << "ClapTrap Constructor is called" << RESET << std::endl;}

/*copy constructor*/
ClapTrap::ClapTrap(const ClapTrap& claptrap) {*this = claptrap;}

/*copy assignment operator*/
ClapTrap&	ClapTrap::operator=(const ClapTrap& claptrap)
{
	if (this != &claptrap)
	{
		_name = claptrap._name;
		_hitPoints = claptrap._hitPoints;
		_energyPoints = claptrap._energyPoints;
		_attackDamage = claptrap._attackDamage;	
	}
	return *this;
}

/*destructor*/
ClapTrap::~ClapTrap(void){std::cout << GREEN << "ClapTrap Destructor is called" << RESET << std::endl;}

void		ClapTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << GREEN << "ClapTrap " << RESET << _name << " attacks " << target
				  << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints -= 1;
	}
	else
		std::cout << GREEN << _name << RESET << " No Energy to attack!" << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= _hitPoints)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
    std::cout << GREEN << "ClapTrap " << RESET << _name << " has taken " << amount 
			  << " damage and now has " << _hitPoints << " hit points left." << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0)
	{
		_hitPoints += amount;
		_energyPoints -= 1;
		std::cout << GREEN << "ClapTrap " << RESET << _name << " repairing " << _hitPoints <<  " total points of health!" << std::endl;
	}
	else
		std::cout << GREEN << "ClapTrap " << RESET << _name << " No Energy to repair!" << std::endl;
}
