/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:10:50 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/29 09:52:54 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
	Zombie z("new");
	Zombie *z1 = NULL;
	
	z1 = newZombie("z1");
	z1->announce();
	z.announce();
	delete z1;
}
