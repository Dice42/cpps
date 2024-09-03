/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 11:54:12 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/03 21:13:11 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap d("here");
	DiamondTrap a;

	a = d;
	// d.attack("target");
	// d.getName
	std::cout << a.getEnergyPoints() << std::endl;
	std::cout << a.getAttackDamage() << std::endl;
	std::cout << a.getName() << std::endl;
	std::cout << std::endl;
	std::cout << d.getEnergyPoints() << std::endl;
	std::cout << d.getAttackDamage() << std::endl;
	std::cout << d.getName() << std::endl;
	
	// d.beRepaired(100);
}