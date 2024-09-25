/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:21:58 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/24 19:29:33 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main ()
{
	

	Array<int>	a(4);

	int i = -1;
	while(++i < 4)
	{
		a[i] = i*2;
		std::cout << a[i] << std::endl;
	}
	std::cout << "size of a: " << a.size() << std::endl;

	std::cout << "---------------\n";
	Array<int> b(a);
	std::cout << b[2] << std::endl;
	std::cout << "size of b: " << b.size() << std::endl;

	std::cout << "---------------\n";
	Array<int> c;

	c = b;

	std::cout << "size of c: " << c.size() << std::endl;
	std::cout << c[3] << std::endl;
		
}
