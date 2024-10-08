/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 20:25:43 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/06 16:21:07 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	// const Animal* meta[4];

	// for (int i = 0; i < 4; i++)
	// {
	// 	if (i % 2 == 0)
	// 		meta[i] = new Dog();
	// 	else
	// 		meta[i] = new Cat();
	// }
	
	// for (int i=0; i < 4; i++)
	// {
	// 		delete meta[i];
	// }
	// Dog basic;
	// {
	// 	basic.printIdeas();
	// 	Dog tmp (basic);
	// 	tmp.printIdeas();
	// 	basic.printIdeas();
	// }
	// Animal *tmp;
	// tmp = new Dog;
	// std::cout << tmp->getType() << std::endl;

	// Animal *city(tmp);
	// city->makeSound();
	// tmp->makeSound();
	// delete tmp;

	// Cat cat;
	// cat.makeSound();
	// Cat copycat = cat;
	// copycat.makeSound();
}
