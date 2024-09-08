/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 20:18:23 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/08 08:15:09 by mohammoh         ###   ########.fr       */
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