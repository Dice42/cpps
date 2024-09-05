/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 20:25:43 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/05 22:22:17 by mohammoh         ###   ########.fr       */
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
	}

}
