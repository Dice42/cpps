/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 20:18:23 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/06 22:38:52 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"

class Cat : public Animal
{
	private:
		Dog  	l[9];
		Animal	*a[3];
		Brain	*brain;

	public:
		Cat(void);
		~Cat(void);
		Cat(const Cat& other);
		
		Cat&			operator=(const Cat& rhs);
		void			makeSound(void) const;
		void			printIdeas(void);
		std::string		getType(void) const;
	
};

#endif