/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:31:34 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/02 14:03:20 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
#include <iostream>

class Point
{
	private:
		Fixed _x;
		Fixed _y;
	public:
		Point(void);
		~Point(void);
		Point(const float x, const float y);
		Point(const Fixed x, const Fixed y);
		Point(const Point& point);
		Point& 		operator=(const Point &rhs);

		Fixed	getX(void) const;
		Fixed	getY(void) const;	
};

Fixed	area(Point a, Point b, Point c);
bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif