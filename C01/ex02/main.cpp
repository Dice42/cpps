/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 07:27:01 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/27 07:39:37 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

int main()
{
	std::string		str = "HI THIS IS BRAIN";
	std::string		*str_p = &str;
	std::string		&str_r = str;

	/*adresses*/
	std::cout << RED << "ADRESSES: " << RESET << std::endl;
	std::cout << "Memory_address for str is  : " << YELLOW << &str << RESET << std::endl;
	std::cout << "Memory_address for str_p is: " << BLUE << &str_p << RESET << std::endl;
	std::cout << "Memory_address for str_r is: " << YELLOW << &str_r << RESET << std::endl << std::endl;
	/*values*/
	std::cout << RED << "VALUES: " << RESET << std::endl;
	std::cout << "Value of str is  : " << GREEN << str << RESET << std::endl;
	std::cout << "Value of str_p is: " << GREEN << *str_p << RESET <<  std::endl;
	std::cout << "Value of str_r is: " << GREEN << str_r << RESET << std::endl;

	return (0);
}
