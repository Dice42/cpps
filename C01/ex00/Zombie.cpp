/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:51:25 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/29 09:50:56 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {}

Zombie::Zombie(std::string name)
{
	set_name(name);
}

Zombie::~Zombie(void)
{
	std::cout <<  "Destructor is called for: " << _name << std::endl;	
}

void		Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void		Zombie::set_name(std::string const name)
{
	this->_name = name;
}
