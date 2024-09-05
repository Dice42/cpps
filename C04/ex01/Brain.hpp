/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 12:16:23 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/05 19:36:14 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

class Brain
{
	private:
		std::string		*ideas;
	public:
		Brain(void);
		virtual ~Brain(void);
		Brain(Brain& other);

		Brain&				operator=(const Brain& rhs);
		std::string*		getBrainIdeas();
};

#endif