/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 09:31:50 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/25 19:09:37 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{
	int x = 10;
	int y = 20;
	
	float x1 = 10.5;
	float y1 = 20.5;

	std::cout << "----int-----\n";
	std::cout << "x	: " << x << std::endl; 
	std::cout << "y	: " << y << std::endl; 
	std::cout << "----swaping integers-----\n";
	swap(x, y);
	std::cout << "x	: " << x << std::endl; 
	std::cout << "y	: " << y << std::endl; 
	std::cout << "----max int-----\n";
	std::cout <<"max: " << max(x, y) << std::endl;
	std::cout << "----min int-----\n";
	std::cout <<"min: " << min(x, y) << std::endl;



	std::cout << "----flaots-----\n";
	std::cout << "x1	: " << x1 << std::endl; 
	std::cout << "y1	: " << y1 << std::endl; 
	std::cout << "----swaping floats-----\n";
	swap(x1, y1);
	std::cout << "x1	: " << x1 << std::endl; 
	std::cout << "y1	: " << y1 << std::endl; 
	std::cout << "----max flaot-----\n";
	std::cout <<"max: " << max(x1, y1) << std::endl;
	std::cout << "----min flaot-----\n";
	std::cout <<"min: " << min(x1, y1) << std::endl;
	
}

// int main( void )
// {
// 	int a = 2;
// 	int b = 3;
// 	::swap( a, b );
// 	std::cout << "a = " << a << ", b = " << b << std::endl;
// 	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
// 	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
// 	std::string c = "chaine1";
// 	std::string d = "chaine2";
// 	::swap(c, d);
// 	std::cout << "c = " << c << ", d = " << d << std::endl;
// 	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
// 	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

// 	const char *str2 = "ab";
// 	const char *str1 = "ac";
// 	std::cout << "max = " << ::max( str1, str2 ) << std::endl;

	
// 	return 0;
// }
