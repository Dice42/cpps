/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:30:51 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/02 10:19:46 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _point(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int point)
{
	std::cout << "Int constructor called" << std::endl;
	_point = point << _bits;

}

Fixed::Fixed(const float point)
{
	std::cout << "Float constructor called" << std::endl;
	_point = roundf(point * (1 << _bits));
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
	if (this != &rhs)
		this->_point = rhs.getRawBits();
	return (*this);
}

int 		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_point);
}

void 		Fixed::setRawBits( int const bits )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_point = bits;
}

float		Fixed::toFloat(void) const
{
	return (static_cast<float>(_point) / (1 << _bits));
}

int			Fixed::toInt(void) const
{
	return (_point >> _bits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return (os);
}