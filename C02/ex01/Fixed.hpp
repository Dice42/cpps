/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:31:13 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/02 10:19:38 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

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
		/* member functions*/
		float		toFloat(void) const;
		int			toInt(void) const;


		/*setter and getters*/
		int 		getRawBits( void ) const;
		void 		setRawBits( int const bits );
};
#endif


/*An overload of the insertion («) operator that inserts a floating-point representation
	of the fixed-point number into the output stream object passed as parameter.*/
	
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);