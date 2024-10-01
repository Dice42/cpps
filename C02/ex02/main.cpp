/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 13:56:59 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/28 20:06:55 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	// Fixed a;
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	
	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;

	Fixed d(5);
	Fixed g(10);

	std::cout << (d == g ? d : g) << std::endl;
	
	// std::cout << a << std::endl;
	// std::cout << b << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;
return 0;
}

/*
	Should output something like (for greater readability, the constructor/destructor mes-
	sages are removed in the example below):
	$> ./a.out
	0
	0.00390625
	0.00390625
	0.00390625
	0.0078125
	10.1016
	10.1016
$>
*/

/* If you ever do a division by 0, it is acceptable that the program crashes */

