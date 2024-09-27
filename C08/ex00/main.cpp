/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:56:07 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/27 12:43:00 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <deque>

int main()
{
	int		values[] = {1,2,3,4,5,0,7,8,9,0};
	/*values is a pointer to the begining of the array and then get the size of the element of the array*/
	// we need to pass values-> the pointer to the start of the array
	std::deque<int> v(values,  values + sizeof(values) / sizeof(int));
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
