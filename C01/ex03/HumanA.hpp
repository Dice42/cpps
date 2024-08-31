/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 07:44:25 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/29 10:26:00 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon			&_w;
		std::string 	_name;
	public:
		HumanA(std::string s, Weapon &w);
		~HumanA(void);
		void			attack();
};

#endif
