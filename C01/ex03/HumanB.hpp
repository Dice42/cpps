/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 07:45:35 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/27 13:06:24 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB 
{
	private:
		Weapon			*_w;
		std::string 	_name;
	public:
		HumanB(std::string s);
		~HumanB(void);
		void			attack();
		void 			setWeapon(Weapon &w);
};

#endif
