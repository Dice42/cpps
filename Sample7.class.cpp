/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample7.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 13:34:20 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/19 18:19:34 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample7.class.hpp"
#include <iostream>

Sample7::Sample7(void) : foo(0)
{
	std::cout << "constructor is called " << std::endl;

	return ;
}

Sample7::~Sample7(void)
{
	std::cout << "destructor is called " << std::endl;
	return ;
}


void Sample7::bar(void) const
{
	std::cout << "member function is called " << std::endl;
	return ;
}