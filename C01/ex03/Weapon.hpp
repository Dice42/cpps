/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 07:45:51 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/27 13:52:52 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
	private:
		std::string		_type;


	public:
		std::string const&		getType(void);
		void					setType(std::string const  type);
		Weapon(std::string w);
		Weapon();
		~Weapon(void);
};

#endif

