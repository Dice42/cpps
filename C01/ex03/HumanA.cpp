/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 09:29:08 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/27 12:35:14 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack(void)
{
	std::cout << "HumanA attacks with their " << _w.getType() << std::endl;
}

HumanA::HumanA(std::string s, Weapon &w) :_w(w), _name(s)
{
}	
HumanA::~HumanA(void){}

