/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 11:54:12 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/04 12:56:52 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	FragTrap c("robot");
	ScavTrap g("fa");

	ScavTrap b;

	b =g;
	c.highFivesGuys();
	c.takeDamage(10);
	c.beRepaired(10);

	
	g.attack("human");
	g.takeDamage(10);
	g.beRepaired(10);
	g.attack("human");
	
	b.attack("human");
	b.takeDamage(10);
	b.beRepaired(10);
	b.attack("human");
}