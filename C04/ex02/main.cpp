/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 20:25:43 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/12 10:03:39 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>
#include <cstdlib>
int main()
{
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	delete j;//should not create a leak
// 	delete i;

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
	// Dog *tmp;
	// tmp = new Dog;
	// std::cout << tmp->getType() << std::endl;
	// delete tmp;

	// // Animal *city(tmp);
	// // city->makeSound();
	// // tmp->makeSound();
	// // delete tmp;

	// Cat cat;
	// cat.makeSound();
	// Cat copycat = cat;
	// copycat.makeSound();
	Dog d;
	Dog tmp;
	Animal *a = new Dog;
	tmp = d;
	std::cout << a->getType() << std::endl;
	delete a;
}

