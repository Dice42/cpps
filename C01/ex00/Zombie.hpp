/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 22:25:22 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/29 09:44:39 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string	_name;

	public:
		Zombie(std::string name);
		Zombie(void);
		~Zombie(void);
		
		void		announce(void);
		void		set_name(std::string name);
};

Zombie* 				newZombie(std::string name);
void 					randomChump(std::string name);

#endif
