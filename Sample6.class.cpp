/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample5.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 13:34:20 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/19 14:08:46 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample5.class.hpp"
#include <iostream>

Sample5::Sample5(int v) : _foo(v)
{
	std::cout << "consturctor called " << std::endl;
	return ;
}

Sample5::~Sample5(void)
{
	std::cout << "destructor called " << std::endl;
	return ;
}


int Sample5::getfoo(void) const
{
	return (this->_foo);
}

int Sample5::compare(Sample5 *other) const
{
	if (this->_foo < other->getfoo())
		return (-1);
	else if (this->_foo > other->getfoo())
		return (1);
	else
		return (0);
}