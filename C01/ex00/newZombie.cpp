/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 17:44:27 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/27 07:17:03 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* 		Zombie::newZombie(std::string name)
{
	Zombie	*z;
	
	z = new (Zombie);
	z->set_name(name);
	return (z);
}
