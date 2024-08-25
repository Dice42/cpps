/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 17:47:07 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/17 21:32:30 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Sample.class.hpp"
# include <iostream>

/**
 * @brief Constructor
 * this is a constructor,
 * it is called when an instance of the class is created
 * it is used to initialize the class members
 * it is used to allocate memory
 * it is used to open a file
 * it is used to open a connection
 * it is used to open a socket
 * it is used to open a database connection
 */
Sample::Sample(void)
{
	std::cout << "Constructor in Sample called" << std::endl;
	this->foo = 42;
	std::cout << "this->foo = " << this->foo << std::endl;
	this->bar();
	return ;
}
/**
 * @brief Destructor
 * this is a destructor,
 * it is called when an instance of the class is destroyed
 * it is used to free the memory allocated by the constructor
 * or to close a file opened by the constructor
 * or to close a connection opened by the constructor
 * or to close a socket opened by the constructor
 * or to close a database connection opened by the constructor
 * 
 */
Sample::~Sample(void)
{
	std::cout << "Destructor in Sample called" << std::endl;
	return ;
}

/**
 * @brief Member function bar
 * this is a member function,
 * it is a function that is part of the class
 * it is used to perform an action on the class members
 * it is used to perform an action on the class instance
 * it is used to perform an action on the class object
 * it is used to perform an action on the class attributes
 * it is used to perform an action on the class methods
 * it is used to perform an action on the class variables
 * it is used to perform an action on the class functions
 * it is used to perform an action on the class properties
 * it is used to perform an action on the class fields
 * it is used to perform an action on the class data members
 * it is used to perform an action on the class data attributes
 * it is used to perform an action on the class data properties
 * it is used to perform an action on the class data fields
 * it is used to perform an action on the class data variables
 */
void Sample::bar(void)
{
	std::cout << "Member function bar called" << std::endl;
	return ;
}
/**
 * @brief Construct a new Sample:: Sample object
 * 
 * @param p1 
 * @param p2 
 * @param p3 
 * 
 * this is a constructor,
 * its better to use an initializer list to initialize the class members
 * this way of inilaization is less effiecent than the initializer list
 */
// Sample::Sample(char p1, int p2, float p3)
// {
// 	this->a1 = p1;
// 	this->a2 = p2;
// 	this->a3 = p3;

// 	std::cout << "this->a1 = " << this->a1 << std::endl;
// 	std::cout << "this->a2 = " << this->a2 << std::endl;
// 	std::cout << "this->a3 = " << this->a3 << std::endl;
// 	return ;
// }


/**
 * @brief Construct a new Sample:: Sample object
 * here we are using an initializer list to initialize the class members 
 */
Sample::Sample(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3)
{
	std::cout << "this->a1 = " << this->a1 << std::endl;
	std::cout << "this->a2 = " << this->a2 << std::endl;
	std::cout << "this->a3 = " << this->a3 << std::endl;
	return ;
}
