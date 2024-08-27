/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 09:29:08 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/27 10:07:08 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack(void)
{
	std::cout << "HumanA attacks with their" << w.getType() << std::endl;
}

HumanA::HumanA(std::string s, Weapon &we) : w(we), name(s)
{
}	
HumanA::~HumanA(void){}

