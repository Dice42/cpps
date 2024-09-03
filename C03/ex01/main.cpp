/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 11:54:12 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/03 21:50:33 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap c("robot");

	
	ScavTrap b;

	ScavTrap d(c);
	c.attack("human");
	c.guardGate();
	c.takeDamage(10);
	// c.beRepaired(10);
	c.attack("human");
	b = c;
	std::cout<< "b energy " << b.getEnergyPoints() << std::endl;
	std::cout<< "c energy " << d.getEnergyPoints() << std::endl;
	
}