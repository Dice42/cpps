/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 11:47:18 by mohammoh          #+#    #+#             */
/*   Updated: 2024/10/04 21:12:57 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
	RPN	rpn;

	if (ac == 2)
	{
		std::string str;

		str = av[1];
		try{
			std::cout << rpn.evalRPN(str) << std::endl;
		}catch(std::exception& e){
			std::cout << e.what() << std::endl;
		}
	}
	else
		std::cout << "Usage: ./RPN \"[expression]\"" << std::endl;
	return 0;
}
