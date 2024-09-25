/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:46:47 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/25 19:17:59 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <exception>
#include <vector>

#define RESET		"\033[0m"
#define GREEN  		"\033[32m"

template <class T>
void	easyfind(T param, int i);

class NotFound : public std::exception{
	public:
		const char* what() const throw() {return ("Not found");};				
};

#include "easyfind.tpp"
#endif