/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:30:51 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/30 20:09:32 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(int point)
{
	_point = point;
}

Fixed::Fixed(void) : _point(0)
{
	setRawBits(0);
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void) 
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed& 		Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_point = rhs.getRawBits();
	return (*this);
}

int 		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_point);
}

void 		Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_point = raw;
}
