/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:36:36 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/20 22:06:56 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}
ScalarConverter::~ScalarConverter(){}
ScalarConverter::ScalarConverter(ScalarConverter const & other){*this = other;}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& rhs){(void)rhs; return *this;}

void	ScalarConverter::_toChar(long double value)
{
	std::cout << "char  : ";
	if (std::isnan(value) || value < std::numeric_limits<char>::min() || value > std::numeric_limits<char>::max())
		std::cout << "impossible" << std::endl;
	else if (std::isprint(value))
		std::cout << "'" << static_cast<char>(value)<< "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
}

void	ScalarConverter::_toInt(long double value)
{
	std::cout << "int   : ";
	if (value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max())
		std::cout << "Non displayable" << std::endl;
	else if (std::isnan(value))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(value) << std::endl;
}

void	ScalarConverter::_toFloat(long double value)
{
	std::cout << "float : ";
	if (std::isinf(value))
	{
		if (value < 0)
			std::cout << "-inff" << std::endl;
		else
			std::cout << "+inff" << std::endl;
		return;
	}
	else if (std::isnan(value))
		std::cout << "nan";
	else if (value < -std::numeric_limits<float>::max() || value > std::numeric_limits<float>::max())
	{
		std::cout << "Non displayable" << std::endl;
		return;
	}
	else
		std::cout << static_cast<float>(value);
	if (static_cast<int>(value) == value)
		std::cout << ".0";
	std::cout << "f" << std::endl;
}

void	ScalarConverter::_toDouble(long double value)
{
	std::cout << "double: ";
	if (std::isinf(value))
	{
		if (value < 0)
			std::cout << "-inf" << std::endl;
		else
			std::cout << "+inf" << std::endl;
		return;
	}
	else if (std::isnan(value))
		std::cout << "nan" << std::endl;
	else if (value < -std::numeric_limits<double>::max() || value > std::numeric_limits<double>::max())
	{
		std::cout << "Non displayable" << std::endl;
		return;
	}
	else
		std::cout << static_cast<double>(value);
	if (static_cast<int>(value) == value)
		std::cout << ".0" << std::endl;
}


//first we check if its v
int		ScalarConverter::_check_type(long double value, char *end)
{
	//check int
}

// we can check if its flaot first than double 
int		ScalarConverter::_isValidInput(std::string input)
{
	long double		value;
	char			*end;

	value = std::strtold(input.c_str(), &end);
	if (input.length() == 1 && !std::isprint(input[0])) //i dont need to check for char because i only need to convert numbers and strdold will return it 
		return CHAR;
	else if (input.c_str() == end)
		return INVALID;
	else if ((value >= std::numeric_limits<int>::min() && value <= std::numeric_limits<int>::max()) 
		&& (input.find('.') == std::string::npos))
		return INT;
	else if ((value >= std::numeric_limits<float>::min() && value <= std::numeric_limits<float>::max())
				&& (input.find('.') != std::string::npos) && (end[0] == 'f'))
		return FLOAT;
	else if ((value >= std::numeric_limits<float>::min() && value <= std::numeric_limits<float>::max())
				&& (input.find('.') != std::string::npos))
		return DOUBLE;
	
	
}


/****************************************** CHECKS ********************************************/

void	ScalarConverter::convert(std::string input)
{

		if (_isValidInput(input) == INVALID)
			return;
	
	/*
		first i need to check the input and confirm its type 
		i could i have something like array of enum
		
		if check if double
			must be longer than a int and also contains . and a number after it\

		else if check if float
			 must contain . and a numbers and an f after it

		else if check if int
				must be a number and be within the integer parameters

		else if check if char
				must be one character and 
		else
			its impossible for all 

	*/
	long double	value;
	char		*end;

	value = std::strtold(input.c_str(), &end);
	//check the type of the input if and then convert it to its actual type then we need to cast it to the other types
	if (input.c_str() == end)
	{
		std::cout << "char	: impossible" << std::endl; 
		std::cout << "int	: impossible" << std::endl; 
		std::cout << "float : impossible" << std::endl; 
		std::cout << "double: impossible" << std::endl;
		return ;
	}
	_toChar(value);
	_toInt(value);
	_toFloat(value);
	_toDouble(value);
}


// ill use stoi, stof , stod if avialable