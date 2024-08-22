/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample3.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 13:34:20 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/18 18:01:08 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample3.class.hpp"
#include <iostream>


Sample3::Sample3(void)
{
	std::cout << "constructor is called" << std::endl;
	this->publicFoo = 42;
	std::cout << "this->publicfoo " << this->publicFoo << std::endl;
	this->_privateFoo = 44;

	_privateBar();	
}

Sample3::~Sample3(void)
{
	std::cout << "destructor is called" << std::endl;
}

void Sample3::publicBar(void) const
{
	std::cout << "public function" << std::endl;
	std::cout << "this->publicFoo" << this->publicFoo << std::endl;
	return ;
}

void Sample3::_privateBar(void) const
{
	std::cout << "private function" << std::endl;
	std::cout << "this->_privateFoo" << this->_privateFoo << std::endl;
	return ;
}