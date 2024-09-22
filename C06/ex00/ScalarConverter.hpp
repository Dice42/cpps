/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:12:00 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/22 12:14:39 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP 
#define SCALARCONVERTER_HPP

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <limits>
#include <string>


#define RESET		"\033[0m"
#define BOLD		"\033[1m"
#define UNDERLINE	"\033[21m"
#define RED    		"\033[31m"
#define GREEN  		"\033[32m"
#define YELLOW		"\033[33m"
#define BLUE		"\033[34m"

class ScalarConverter
{
	private:
		enum e_type{CHAR, INT, FLOAT, DOUBLE, SPECIAL, INVALID, NOTAPPLICABLE};
		
		/*orthodics canonical*/
		ScalarConverter();
		~ScalarConverter(void);
		ScalarConverter(ScalarConverter const & other);
		ScalarConverter& operator=(const ScalarConverter& rhs);
		
		/*check*/
		static int _checkType(std::string input);

		/*conversion*/
		static void _fromChar(std::string input);
		static void _fromInt(std::string input);
		static void _fromFloat(std::string input);
		static void _fromDouble(std::string input);
		static void _isSpecial(std::string input);
		static void	_impossible(void);
		static void	_notApplicable(void);

		static void	_toInt(long double value);
		static void	_toChar(long double value);
		static void	_toFloat(long double value);
		static void	_toDouble(long double value);

	public:
		static void		convert(std::string	input);
};

#endif