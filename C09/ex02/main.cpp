/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 19:44:38 by mohammoh          #+#    #+#             */
/*   Updated: 2024/10/07 14:18:12 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	PmergeMe	pmerge;

	try{
		pmerge.initialize(ac, av);
		pmerge.displayResults();
	}catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}