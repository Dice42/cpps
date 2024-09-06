/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ++4 <mohammoh@student.42abudhabi.ae>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 20:25:43 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/06 10:33:56 by ++4              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
	// const Animal* meta[10];

	// for (int i = 0; i < 10; i++)
	// {
	// 	if (i % 2 == 0)
	// 		meta[i] = new Dog();
	// 	else
	// 		meta[i] = new Cat();
	// }
	
	// for (int i=0; i < 10; i++)
	// {
	// 		delete meta[i];
	// }
	// return 0;
	Dog basic;
	{
		basic.printIdeas();
		Dog tmp (basic);
		tmp.printIdeas();
		basic.printIdeas();
	}
	Animal *tmp;
	tmp = new Cat;
	std::cout << tmp->getType() << std::endl;
}
