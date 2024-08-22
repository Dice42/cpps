/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample2.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 17:47:07 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/17 21:43:02 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Sample2.class.hpp"
# include <iostream>

Sample2::Sample2(float const f) : pi(f), foo(42)
{
	std::cout << "constructor in Sample2 called" << std::endl;
	return ;
}
Sample2::~Sample2(void)
{
	std::cout << "destructor in Sample2 called" << std::endl;
	return ;
}

void Sample2::bar(void) const
{
	std::cout << "this function will not be altered" << std::endl;
	std::cout << "this->foo = " << this->foo << std::endl;
	std::cout << "this->pi = " << this->pi << std::endl;
	return ;
}