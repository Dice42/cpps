/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 17:44:27 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/26 18:18:06 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie* 		Zombie::newZombie(std::string name)
{
	Zombie	*z;
	
	z = new (Zombie);
	z->set_name(name);
	return (z);
}
