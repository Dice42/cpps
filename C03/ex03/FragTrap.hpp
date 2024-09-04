/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:39:55 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/04 14:01:24 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

#define RESET   "\033[0m"
#define BLUE    "\033[34m"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(std::string name);
		FragTrap(void);
		FragTrap(const FragTrap& fragtrap);
		virtual ~FragTrap(void);

		FragTrap&	operator=(const FragTrap& rhs);
		void 		highFivesGuys();
};

#endif