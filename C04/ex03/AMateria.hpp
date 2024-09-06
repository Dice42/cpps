/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 16:32:31 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/06 22:22:54 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string		_type; //i think we need this here

	public:
		AMateria();
		AMateria(std::string const & type); //constructor with string parameter
		AMateria(const AMateria & other);
		virtual ~AMateria(void);

		AMateria&	operator=(const AMateria& rhs);

		
		/*pure functions*/
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif