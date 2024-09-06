/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 16:58:58 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/06 19:47:36 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		~Cure(void);
		Cure(const Cure& other);

		Cure&		operator=(const Cure& rhs);
		AMateria* 	clone() const;
		void		use(ICharacter& target)
		/*
			The use(ICharacter&) member function will display:
			•Ice: "* shoots an ice bolt at <name> *"
			•Cure: "* heals <name>’s wounds *"
			
			<name> is the name of the Character passed as parameter. Don’t print the angle
			brackets (< and >).
			While assigning a Materia to another, copying the type doesn’t make
			sense.
		*/
};
#endif