/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample4.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 13:34:20 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/20 20:53:34 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample4.class.hpp"
#include <iostream>

Sample4::Sample4(void)
{
	std::cout << "constructor called " << std::endl;
	
	this->setfoo(0);
	std::cout << "this->gefoo " << this->getfoo() << std::endl;
	return ;
}

Sample4::~Sample4(void)
{
	std::cout << "destructor called " << std::endl;
	return ;
}

int	Sample4::getfoo(void) const
{
	// return a copy of _foo attribute
	return (this->_foo);
}

void Sample4::setfoo(int v)
{
	if (v >= 0)
		this->_foo = v;
	else
		this->_foo = -42;
}

