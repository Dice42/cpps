/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:38:21 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/04 10:44:44 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

#define RESET   "\033[0m"
#define YELLOW  "\033[33m"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		~ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& scavtrap);

		ScavTrap&	operator=(const ScavTrap& scavtrap);
		void		attack(const std::string& target);
		void 		guardGate();	
};

#endif