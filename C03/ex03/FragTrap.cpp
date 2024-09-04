/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:41:57 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/04 13:15:12 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* overloaded constructor with string parameter*/
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << BLUE << "FragTrap Constructor is called" << RESET << std::endl;
}

/* constructor */
FragTrap::FragTrap(void) : ClapTrap()
{
	this->_name = "FragTrap";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << BLUE << "FragTrap Constructor is called" << RESET << std::endl;
}

/* copy constructor */
FragTrap::FragTrap(const FragTrap& fragtrap) : ClapTrap() {*this = fragtrap;}

/* copy assigment operator */
FragTrap&	FragTrap::operator=(const FragTrap& rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

/* destructor */
FragTrap::~FragTrap(void) {std::cout << BLUE << "FragTrap Destructor is called" << RESET << std::endl;}

void		FragTrap::highFivesGuys(void)
{
	std::cout << BLUE << "FragTrap " << RESET << _name << " high fives guys!" << std::endl;
}
