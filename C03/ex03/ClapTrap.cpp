/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:38:45 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/03 20:30:27 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void){std::cout << GREEN << "ClapTrap Constructor is called" << RESET << std::endl;}
ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{std::cout << GREEN << "ClapTrap Constructor is called" << RESET << std::endl;}
ClapTrap::~ClapTrap(void){std::cout << "ClapTrap Destructor is called" << std::endl;}
ClapTrap::ClapTrap(const ClapTrap& claptrap) {*this = claptrap;}
ClapTrap&	ClapTrap::operator=(const ClapTrap& claptrap)
{
	_name = claptrap._name;
	_hitPoints = claptrap._hitPoints;
	_energyPoints = claptrap._energyPoints;
	_attackDamage = claptrap._attackDamage;
	return *this;
}

void		ClapTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target
				  << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints -= 1;
	}
	else
		std::cout << _name << " No Energy to attack!" << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= _hitPoints)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
    std::cout << "ClapTrap " << _name << " has taken " << amount 
			  << " damage and now has " << _hitPoints << " hit points left." << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0)
	{
		_hitPoints += amount;
		_energyPoints -= 1;
		std::cout << "ClapTrap " << _name << " repairing " << _hitPoints <<  " total points of health!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " No Energy to repair!" << std::endl;
}
/*setters*/
void			ClapTrap::setName(std::string name) { _name = name;}
void			ClapTrap::setHitPoints(unsigned int hitPoints) { _hitPoints = hitPoints;}	
void			ClapTrap::setEnergyPoints(unsigned int energyPoints) { _energyPoints = energyPoints;}
void			ClapTrap::setAttackDamage(unsigned int attackDamage) { _attackDamage = attackDamage;}

/*getters*/
std::string		ClapTrap::getName(void) const { return _name;}
unsigned int	ClapTrap::getHitPoints(void) const { return _hitPoints;}
unsigned int	ClapTrap::getEnergyPoints(void) const { return _energyPoints;}
unsigned int	ClapTrap::getAttackDamage(void) const { return _attackDamage;}
