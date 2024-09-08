/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 12:14:54 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/07 15:51:32 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	protected:
		AMateria		*m[4];
		int				_count;
	public:
		MateriaSource(void);
		~MateriaSource(void);
		MateriaSource(const MateriaSource& other);

		MateriaSource&	operator=(const MateriaSource& rhs);
		void 			learnMateria(AMateria*);
		AMateria*		createMateria(std::string const & type);
};
#endif