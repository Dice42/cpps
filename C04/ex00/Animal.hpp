/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 20:17:34 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/05 12:02:03 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

class Animal
{
	protected:
		std::string		type;
	public:
		Animal(void);
		Animal(const Animal& other);
		virtual ~Animal(void);
		
		Animal&			operator=(const Animal& rhs);
		virtual void	makeSound(void) const;
		std::string		getType(void) const;

};

#endif