/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 13:56:25 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/02 11:28:26 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include  <cmath>

class Fixed
{
	private:
		int					_point;
		static const int	_bits = 8;
		
	public:
		Fixed(void);
		Fixed(const Fixed& fixed);
		Fixed(const int point); 
		Fixed(const float point); 
		~Fixed(void); 
		
		Fixed& 		operator=(const Fixed &rhs);
		
		/*comparison operation*/
		bool 			operator>(const Fixed &rhs) const;
		bool 			operator<(const Fixed &rhs) const;
		bool 			operator>=(const Fixed &rhs) const;
		bool 			operator<=(const Fixed &rhs) const;
		bool 			operator==(const Fixed &rhs) const;
		bool 			operator!=(const Fixed &rhs) const;
	
		/*arithmetic operation*/
		Fixed 			operator/(const Fixed &rhs);
		Fixed 			operator+(const Fixed &rhs);
		Fixed 			operator-(const Fixed &rhs);
		Fixed 			operator*(const Fixed &rhs);

		/*increment and decrement*/
		Fixed& 			operator++();
		Fixed& 			operator--();
		Fixed 			operator++(int);
		Fixed 			operator--(int);

		/* member functions*/
		float			toFloat(void) const;
		int				toInt(void) const;
		
		/*setters & getters*/
		int 			getRawBits(void) const;
		void 			setRawBits(int const bits);

		static			Fixed& min(Fixed& a, Fixed& b);
		static const	Fixed& min(const Fixed& a, const Fixed& b);
		static			Fixed& max(Fixed& a, Fixed& b);
		static const	Fixed& max(const Fixed& a, const Fixed& b);
};
#endif

/*An overload of the insertion («) operator that inserts a floating-point representation
	of the fixed-point number into the output stream object passed as parameter.*/
std::ostream&	operator<<(std::ostream& os, const Fixed& fixed);
