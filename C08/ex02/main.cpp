/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 22:04:21 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/28 15:55:14 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int>	mstack;

	mstack.push(4);
	mstack.push(6);
	mstack.push(7);
	mstack.push(8);
	mstack.push(20);
	mstack.pop();
	MutantStack<int> copy(mstack);
	std::cout << mstack.top() << std::endl;
	std::cout << copy.top() << std::endl;
	MutantStack<int> copyassignment;
	copyassignment = copy;
	std::cout << copyassignment.top() << std::endl;

	std::cout << "\n----checking iterators---\n";
	MutantStack<int>::iterator itr;
	for (itr = mstack.begin(); itr < mstack.end(); itr++)
		std::cout << *itr << std::endl;
}
