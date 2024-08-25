/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 17:49:24 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/25 20:47:57 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Sample.class.hpp"
# include "Sample2.class.hpp"
# include "Sample3.class.hpp"
# include "Sample4.class.hpp"
# include "Sample5.class.hpp"
# include "Sample6.class.hpp"
# include "Sample7.class.hpp"
# include <iostream>

int		main(void)
{
	// std::cout << "main function called" << std::endl << std::endl;
	// std::cout << "------------\n" << "Sample " << std::endl << "------------\n";
	// Sample instance;
	
	// std::cout << "\n\n------------\n" << "Sample " << std::endl << "------------\n";
	// Sample instance2('a', 42, 4.2f);

	// std::cout << "\n\n------------\n" << "Sample2 " << std::endl << "------------\n";
	// Sample2 instance3(3.14f);
	// instance3.bar();
	
	// std::cout << "\n\n------------\n" << "Sample3 " << std::endl << "------------\n";
	// Sample3 instance4;
	// instance4.publicBar();

	// std::cout << "\n\n------------\n" << "Sample4 " << std::endl << "------------\n";
	// Sample4 instance5;
	
	// instance5.setfoo(42);
	// std::cout << "instance.getfoo " << instance5.getfoo() << std::endl;

	// instance5.setfoo(-4);
	// std::cout << "instance.getfoo " << instance5.getfoo() << std::endl;
	
	// std::cout << "\n\n------------\n" << "Sample5 " << std::endl << "------------\n";
	// Sample5 instance6(42);
	// Sample5 instance7(42);
	


	// if (&instance6 == &instance6)
	// 	std::cout << "instance 1 and instance 1 are physically equal" << std::endl;
	// else
	// 	std::cout << "instance 1 and instance 1 are not physically equal" << std::endl;

	// if (&instance6 == &instance7)
	// 	std::cout << "instance 1 and instance 2 are physically equal" << std::endl;
	// else
	// 	std::cout << "instance 1 and instance 2 are not physically equal" << std::endl;

	// if (instance6.compare(&instance6) == 0)
	// 	std::cout << "instance 1 and instance 1 are structurally equal" << std::endl;
	// else
	// 	std::cout << "instance 1 and instance 1 are not structurally equal" << std::endl;

	// if (instance6.compare(&instance7) == 0)
	// 	std::cout << "instance 1 and instance 2 are structurally equal" << std::endl;
	// else
	// 	std::cout << "instance 1 and instance 2 are not structurally equal" << std::endl;


	std::cout << "\n\n------------\n" << "Sample6 " << std::endl << "------------\n";
	Sample6 instance8;
	instance8.get_num_of_instances();
	Sample6 instance9;
	instance9.get_num_of_instances();
	Sample6 instance10;
	instance10.get_num_of_instances();
	

	// /* just trying out stuff on main declaring a string and
	// 	printing it to an uppercase letter  */
	// std::string str;
	// str = "hello world";
	// for (size_t i = 0; i < str.size(); i++)
	// 	std::cout << (char)std::toupper(str[i]);
	// std::cout << std::endl;

	// Sample7 instance11;
	// Sample7 *instance12;

	// instance12 = &instance11;

	// //declaring a pointer of int attribute of a simple class 
	// int	Sample7::*p = NULL;
	// //declaring a pointer of  on a const member function of a simple class
	// void	(Sample7::*f)(void) const;

	// p = &Sample7::foo;
	
	// std::cout << "instance 1 value of member foo " << instance11.foo << std::endl;
	// std::cout << "instance 2 value of member foo " << instance12->foo << std::endl;
	// std::cout << "pointer p " << instance11.*p << std::endl;
	
	// instance12->*p = 42;
	
	// std::cout << "pointer p " << instance11.*p << std::endl;
	// std::cout << "pointer p " << instance12->*p << std::endl;


	// f = &Sample7::bar;
	
	// (instance11.*f)();
	// (instance12->*f)();
	
	return (0);
}