/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:52:44 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/04 12:49:32 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

#define RESET   "\033[0m"
#define RED     "\033[31m"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string		_name;
		
	public:
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& diamondtrap);
		DiamondTrap(void);
		~DiamondTrap(void);

		DiamondTrap&	operator=(const DiamondTrap& rhs);
		
		void whoAmI();

};

#endif