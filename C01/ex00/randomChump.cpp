/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 17:48:27 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/26 18:18:20 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

void		Zombie::randomChump(std::string name)
{
	Zombie	z;

	z.set_name(name);
	z.announce();
}
