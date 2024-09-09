/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:30:40 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/09 20:54:59 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat a("mohmed", 4);
	std::exception_ptr p;
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
		p = std::current_exception();
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::rethrow_exception(p);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::rethrow_exception(p);
	}
	catch(...)
	{
		std::cerr <<"im here \n";
	}
	
}
