/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:49:21 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/25 19:17:32 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
#define EASYFIND_TPP
#include "easyfind.hpp"


template <class T>
void	easyfind(T param, int i)
{
	std::vector<int>::iterator itr;
	for (itr = param.begin(); itr < param.end(); itr++)
	{
			if (*itr == i)
			{
				std::cout << GREEN << "found: " << RESET << *itr 
						<< " at index: " << (itr - param.begin()) << std::endl;
				return;
			}
	}
	throw NotFound();
}

#endif