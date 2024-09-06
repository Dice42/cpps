/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 17:01:49 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/06 22:09:45 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria //not sure yet
{
	public:
		Ice(void);
		~Ice(void);
		Ice(const Ice& other);

		Ice&	operator=(const Ice& rhs);
		AMateria* clone() const;
		void		use(ICharacter& target);
};
#endif