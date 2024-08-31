/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 13:56:25 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/31 14:34:36 by mohammoh         ###   ########.fr       */
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
		static const int	_raw = 8;
		
	public:
		Fixed(const Fixed& fixed);
		Fixed(const int point); 
		Fixed(const float point); 
		Fixed(void);
		~Fixed(void); 
		
		/*comparison operation*/
		bool 		operator>(const Fixed &rhs);
		bool 		operator<(const Fixed &rhs);
		bool 		operator>=(const Fixed &rhs);
		bool 		operator<=(const Fixed &rhs);
		bool 		operator==(const Fixed &rhs);
		bool 		operator!=(const Fixed &rhs);
	
		/*arithmetic operation*/
		int 		operator/(const Fixed &rhs);
		int 		operator+(const Fixed &rhs);
		int 		operator-(const Fixed &rhs);
		int 		operator*(const Fixed &rhs);

		/*increment and decrement*/
		// int 		operator++(const Fixed &rhs);
		// int 		operator--(const Fixed &rhs);

		/*setters & getters*/
		int 		getRawBits(void) const;
		void 		setRawBits(int const raw);

		static Fixed&			min(Fixed& a, Fixed& b);
		static Fixed& 			min( const Fixed& a, const Fixed& b); 
		static Fixed&			max(Fixed& a, Fixed& b);
		static Fixed& 			max(const Fixed&  a, const Fixed&  b); 
};
#endif
