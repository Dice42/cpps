/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:21:59 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/26 20:30:26 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#define RESET		"\033[0m"
#define BOLD		"\033[1m"
#define GREEN  		"\033[32m"
#define RED    		"\033[31m"

template <class T, size_t n, class F>
 void iter(T (&arr)[n], unsigned int length, F function)
{
	if (n != length)
	{
		std::cerr << RED << "ERROR: " << RESET << BOLD << "Invalid length, retry with the correct value >> "
					<< RESET << GREEN << n << RESET << std::endl;
		return;
	}
	for (unsigned int i = 0; i < length; i++)
		function(arr[i]);
}

#endif