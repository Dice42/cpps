/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:12:00 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/18 22:19:12 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP 
#define SCALARCONVERTER_HPP

#include <string>
#include <cmath>
#include <cstdlib>
#include <iostream>

/*this class doesn’t need to store anything at all, this class must not be instanciable by users*/
//Except for char parameters, only the decimal notation will be used

class ScalarConverter
{
	private:
		ScalarConverter();
		~ScalarConverter(void){};
		ScalarConverter(ScalarConverter const & other){*this = other;};
		ScalarConverter& operator=(const ScalarConverter& rhs){return *this;};

	public:
		void	toInt(std::string s);
		void	toChar(std::string s);
		void	toFloat(std::string s);
		void	toDouble(std::string s);


	static void		convert(std::string	string); //this function will output its value in the following (char, int, float, double)
};

#endif