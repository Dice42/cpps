/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:38:21 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/04 14:01:13 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

#define RESET   "\033[0m"
#define YELLOW  "\033[33m"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& scavtrap);
		virtual ~ScavTrap(void);

		ScavTrap&	operator=(const ScavTrap& scavtrap);
		void		attack(const std::string& target);
		void 		guardGate();	
};

#endif