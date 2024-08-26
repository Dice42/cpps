/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:51:25 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/26 20:42:49 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie::Zombie(void) {}

Zombie::Zombie(std::string name)
{
	std::cout << name << std::endl;	
	set_name(name);
}

Zombie::~Zombie(void)
{
	std::cout << _name <<  " destructor is called" << std::endl;	
}

void		Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void		Zombie::set_name(std::string const name)
{
	this->_name = name;
}
