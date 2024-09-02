/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:31:31 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/02 14:18:43 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0) {}
Point::~Point(void) {}
Point::Point(Fixed const x, Fixed const y) : _x(x), _y(y) {}
Point::Point(float const x, float const y) : _x(Fixed(x)), _y(Fixed(y)) {}
Point::Point(const Point& point)
{
	*this = point;
}

Point&	Point::operator=(const Point &rhs)
{
	if (this != &rhs)
	{
		this->_x = rhs._x;
		this->_y = rhs._y;
	}
	return (*this);
}

Fixed	Point::getX(void) const {return _x;}
Fixed	Point::getY(void) const {return _y;}
