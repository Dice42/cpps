/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 11:54:12 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/03 15:53:53 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap c("robot");

	c.attack("human");
	c.highFivesGuys();
	c.takeDamage(10);
	c.beRepaired(10);
	c.attack("human");
}