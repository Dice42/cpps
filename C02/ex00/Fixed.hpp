/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:31:13 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/30 20:07:45 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					_point;
		static const int	_raw = 8;
		
	public:
		Fixed(void);
		Fixed(const Fixed& fixed);
		Fixed(int point); 
		~Fixed(void); 
		
		Fixed& 		operator=(const Fixed &rhs);
		int 		getRawBits( void ) const;
		void 		setRawBits( int const raw );
};
#endif
