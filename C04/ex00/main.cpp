/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 20:25:43 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/19 08:56:31 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{

	// Animal a;
	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	const WrongAnimal* c = new WrongCat();
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	std::cout << c->getType() << " " << std::endl;
	
	// i->makeSound(); //will output the cat sound!
	// j->makeSound();
	// meta->makeSound();
	c->makeSound();
	// delete meta;
	// delete i;
	// delete j;
	delete c;

return 0;
}
