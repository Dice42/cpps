/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample5.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 13:34:20 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/19 15:30:37 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample6.class.hpp"
#include <iostream>


 /* constructor */

 Sample6::Sample6(void)
 {
	std::cout << " constructor called "  << std::endl;
	this->_foo += 1;
	std::cout << "num of instances : " << this->_foo << std::endl;
	return ;
 }
 
/* destructor */

 Sample6::~Sample6(void)
 {
	std::cout << " destructor called "  << std::endl;
	this->_foo -= 1;
	return ;
 }

 int	Sample6::get_num_of_instances(void)
 {
	return (Sample6::_foo);
 }

/*
 	this is the only way to initialise a non member attribute (static attribute)
	this is initialised without an instance being created
*/
 int	Sample6::_foo = 0;