/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 13:56:42 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/02 12:22:46 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*****************************constructors & destructors*****************************/
Fixed::Fixed(void) : _point(0) {}

Fixed::Fixed(const int point)
{
	_point = point << _bits;
}

Fixed::Fixed(const float point)
{
	_point = roundf(point * (1 << _bits));
}

Fixed::~Fixed(void) {}

Fixed::Fixed(const Fixed& fixed)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

/*************************operator overload**************************************/

Fixed& 		Fixed::operator=(const Fixed &rhs)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_point = rhs._point;
	return (*this);
}

/*comparison operation*/
bool		Fixed::operator>(const Fixed &rhs) const
{
	if (this->_point > rhs._point)
		return (true);
	return (false);
		
}
bool		Fixed::operator<(const Fixed &rhs) const
{
	if (this->_point < rhs._point)
		return (true);
	return (false);
		
}
bool		Fixed::operator>=(const Fixed &rhs) const
{
	if (this->_point >= rhs._point)
		return (true);
	return (false);
		
}
bool		Fixed::operator<=(const Fixed &rhs) const
{
	if (this->_point <= rhs._point)
		return (true);
	return (false);
		
}
bool 		Fixed::operator==(const Fixed &rhs) const
{
	if (this->_point == rhs._point)
		return (true);
	return (false);
}
bool 		Fixed::operator!=(const Fixed &rhs) const
{
	if (this->_point != rhs._point)
		return (true);
	return (false);
}

/*arithmetic operation*/
Fixed		Fixed::operator/(const Fixed &rhs)
{
	// if (rhs._point == 0)
    //     throw std::runtime_error("Division by zero");
	Fixed	result;
	result._point = (this->_point << _bits) /  rhs._point;
	return (result);
}

Fixed 		Fixed::operator*(const Fixed &rhs)
{
	Fixed	result;
	result._point = (this->_point *  rhs._point) >> _bits;
	return (result);
}

Fixed		Fixed::operator+(const Fixed &rhs)
{
	Fixed	result;
	result._point = this->_point +  rhs._point;
	return (result);
}

Fixed 		Fixed::operator-(const Fixed &rhs)
{
	Fixed	result;
	result._point = this->_point -  rhs._point;
	return (result);
}

/*pre incremenrt and pre decrement operation for member function*/
Fixed& Fixed::operator++()
{
    ++_point;
    return *this;
}

Fixed& Fixed::operator--()
{
    --_point;
    return *this;
}

/*post incremenrt and post decrement operation for member function*/
Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    ++_point;
    return temp;
}


Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
    --_point;
    return temp;
}


float		Fixed::toFloat(void) const
{
	return (static_cast<float>(_point) / (1 << _bits));
}

int			Fixed::toInt(void) const
{
	return (_point >> _bits);
}

/**********************************getters and setters***************************************/
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

/**********************************overloaded member functions***************************************/
Fixed&			Fixed::min(Fixed& a, Fixed& b)
{
    return (a < b) ? a : b;
}

Fixed&			Fixed::max(Fixed& a, Fixed& b)
{
    return (a > b) ? a : b;
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
    return (a < b) ? a : b;
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
    return (a > b) ? a : b;
}


std::ostream&	operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}
