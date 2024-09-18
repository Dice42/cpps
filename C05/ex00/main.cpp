/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:30:40 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/14 20:23:44 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
int main()
{
	Bureaucrat a("mohmed", 4);
	try
	{
		a.incrementGrade();
		std::cout << a << std::endl;
		a.incrementGrade();
		std::cout << a << std::endl;
		a.incrementGrade();
		std::cout << a << std::endl;
		a.incrementGrade();
		std::cout << a << std::endl;
		std::cout << "didnt reach here" << std::endl;
		a.incrementGrade();
		std::cout << a << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
}
