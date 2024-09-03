/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 11:54:12 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/03 12:01:24 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void){}
ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10), _energyPoint(10), _attackPoint(0){}
ClapTrap::~ClapTrap(void){}
void		ClapTrap::attack(const std::string& target)
{
	
}
void		ClapTrap::takeDamage(unsigned int amount)
{
	
}
void		ClapTrap::beRepaired(unsigned int amount)
{
	_hitPoint += amount;
	_energyPoint -= 1;
}