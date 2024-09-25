/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:56:07 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/25 19:18:42 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> v = {1,2,3,4,5,0,7,8,9,0};
	try{
		easyfind(v, 0);
	}
	catch(std::exception& e){
		std::cout << e.what() << std::endl;
	}

	try{
		easyfind(v, 24);
	}
	catch(std::exception& e){
		std::cout << e.what() << std::endl;
	}
}