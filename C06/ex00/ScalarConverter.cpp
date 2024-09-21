/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:36:36 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/21 20:12:32 by mohammoh         ###   ########.fr       */
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

/* conversion */
void 	ScalarConverter::_fromChar(std::string input)
{
	int		value;

	value = std::stoi(input.c_str());
	std::cout << "char  : " << static_cast<char>(value) << std::endl;
	std::cout << "int   : " << value << std::endl;
	std::cout << "float : " << static_cast<float>(value) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(value) << ".0" << std::endl;
}

void 	ScalarConverter::_fromInt(std::string input)
{
	int		value;

	value = std::stoi(input.c_str());
	_toChar(value);
	std::cout << "int   : " << value << std::endl;
	std::cout << "float : " << static_cast<float>(value) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(value) << ".0" << std::endl;
}

void 	ScalarConverter::_fromFloat(std::string input)
{
	float	value;

	value = std::stof(input.c_str());
	_toChar(value);
	_toInt(value);
	std::cout << "float : " << value;
	if (static_cast<int>(value) == value)
		std::cout << ".0";
	std::cout << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(value);
	if (static_cast<int>(value) == value)
		std::cout << ".0" << std::endl;
}

void 	ScalarConverter::_fromDouble(std::string input)
{
	double	value;

	value = std::stod(input.c_str());
	_toChar(value);
	_toInt(value);
	_toFloat(value);
	std::cout << "double: " << value;
	if (static_cast<int>(value) == value)
		std::cout << ".0" << std::endl;
}


void ScalarConverter::_isSpecial(std::string input)
{
	long double value;

	value = std::strtold(input.c_str(), NULL);
	_toChar(value);
	_toInt(value);
	_toFloat(value);
	_toDouble(value);
}

void	ScalarConverter::_impossible(void)
{
	std::cout << "char  : impossible" << std::endl; 
	std::cout << "int   : impossible" << std::endl; 
	std::cout << "float : impossible" << std::endl; 
	std::cout << "double: impossible" << std::endl;
}

int		ScalarConverter::_checkType(std::string input)
{
	long double		value;
	char			*end;

	value = std::strtold(input.c_str(), &end);
	if (input.length() == 1 && std::isprint(input[0]))
		return CHAR;
	else if (input.c_str() == end)
		return INVALID;
	else if (std::isinf(value))
		return INF;
	else if (std::isnan(value))
		return _NAN;
	else if ((value >= std::numeric_limits<int>::min() && value <= std::numeric_limits<int>::max()) 
		&& (input.find('.') == std::string::npos))
		return INT;
	else if ((value >= std::numeric_limits<float>::min() && value <= std::numeric_limits<float>::max())
				&& (input.find('.') != std::string::npos) && (static_cast<std::string>(end).size() == 1 && end[0] == 'f'))
		return FLOAT;
	else if ((value >= std::numeric_limits<float>::min() && value <= std::numeric_limits<float>::max())
				&& (input.find('.') != std::string::npos) && end[0] == '\0')
		return DOUBLE;
	return  INVALID;
}


/****************************************** CONVERT ********************************************/

void	ScalarConverter::convert(std::string input)
{
	switch (_checkType(input))
	{
		case CHAR: _fromChar(input);
			break;
		case INT: _fromInt(input);
			break;
		case FLOAT: _fromFloat(input);
			break;
		case DOUBLE: _fromDouble(input);
			break;
		case INF: _isSpecial(input);
			break;
		case _NAN: _isSpecial(input);
			break;
		case INVALID: _impossible();
			break;
	}
}
