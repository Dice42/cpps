/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 13:56:42 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/30 21:56:39 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


/*****************************constructors & destructors*****************************/
Fixed::Fixed(int const point)
{
	_point = point;
}

Fixed::Fixed(void) : _point(0)
{
	setRawBits(0);
}

Fixed::~Fixed(void) {}

Fixed::Fixed(Fixed& fixed)
{
	*this = fixed;
}

/*************************operator overload**************************************/

/*comparison operation*/
bool		Fixed::operator>(const Fixed &rhs)
{
	if (this->getRawBits() > rhs.getRawBits())
		return (true);
	return (false);
		
}
bool		Fixed::operator<(const Fixed &rhs)
{
	if (this->getRawBits() < rhs.getRawBits())
		return (true);
	return (false);
		
}
bool		Fixed::operator>=(const Fixed &rhs)
{
	if (this->getRawBits() >= rhs.getRawBits())
		return (true);
	return (false);
		
}
bool		Fixed::operator<=(const Fixed &rhs)
{
	if (this->getRawBits() <= rhs.getRawBits())
		return (true);
	return (false);
		
}
bool 		Fixed::operator==(const Fixed &rhs)
{
	if (this->getRawBits() == rhs.getRawBits())
		return (true);
	return (false);
}
bool 		Fixed::operator!=(const Fixed &rhs)
{
	if (this->getRawBits() != rhs.getRawBits())
		return (true);
	return (false);
}

/*arithmetic operation*/
int 		Fixed::operator/(const Fixed &rhs)
{
	this->_point = this->getRawBits() /  rhs.getRawBits();
	return (this->_point);
}

int 		Fixed::operator*(const Fixed &rhs)
{
	this->_point = this->getRawBits() *  rhs.getRawBits();
	return (this->_point);
}

int 		Fixed::operator+(const Fixed &rhs)
{
	this->_point = this->getRawBits() +  rhs.getRawBits();
	return (this->_point);
}

int 		Fixed::operator-(const Fixed &rhs)
{
	this->_point = this->getRawBits() -  rhs.getRawBits();
	return (this->_point);
}

/*incremenrt and decrement operation*/


/**********************************getters and setters***************************************/
int 		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_point);
}

void 		Fixed::setRawBits( int const raw )
{
	this->_point = raw;
}

/**********************************overloaded member functions***************************************/
static Fixed& 		min(Fixed& a, Fixed& b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

static Fixed& 		max(Fixed& a, Fixed& b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

static Fixed& 		min( const Fixed& a, const Fixed& b) 
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

static Fixed& 		max(const Fixed&  a, const Fixed&  b)
{
	
}
