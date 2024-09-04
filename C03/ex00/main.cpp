/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 11:54:12 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/04 10:05:49 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("enemy");
	ClapTrap b("hitman");

	a.attack("hitman");
	a.beRepaired(10);
	a.takeDamage(30);

	ClapTrap o(a);
	o.attack("lol");
}