/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:12:00 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/20 22:07:08 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP 
#define SCALARCONVERTER_HPP

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <limits>
#include <string>

class ScalarConverter
{
	private:
		enum e_type{CHAR, INF, _NAN, INT, FLOAT, DOUBLE, INVALID};
		
		/*orthodics canonical*/
		ScalarConverter();
		~ScalarConverter(void);
		ScalarConverter(ScalarConverter const & other);
		ScalarConverter& operator=(const ScalarConverter& rhs);
		
		/*checks*/
		static int _isValidInput(std::string input);
		static int _check_type(long double value, char *end);


		/*conversion*/
		static void	_toInt(long double value);
		static void	_toChar(long double value);
		static void	_toFloat(long double value);
		static void	_toDouble(long double value);

	public:
		static void		convert(std::string	input);
};

#endif