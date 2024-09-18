/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:36:36 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/18 22:21:25 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}
ScalarConverter::~ScalarConverter(){}
ScalarConverter::ScalarConverter(ScalarConverter const & other){*this = other;}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& rhs){return *this;}


void	ScalarConverter::toChar(std::string s)
{
	
}

void	ScalarConverter::toInt(std::string s)
{
	
}

void	ScalarConverter::toFloat(std::string s)
{
	
}

void	ScalarConverter::toDouble(std::string s)
{
	
}

void	ScalarConverter::convert(std::string string)
{
	//stoi, stof, stod	
	//char
	//int  		->stoi
	//float		->stof
	//double	->stod
}


//we need to check if its a characater that is printable 


/*
./convert 0

	char:			Non displayable
	int:			0
	float:			0.0f
	double:			0.0
	
-------------------------------------
./convert nan
	char:			impossible
	int:			impossible
	float:			nanf
	double:			nan

-------------------------------------
./convert 42.0f
	char:			'*'
	int:			42
	float:			42.0f
	double:			42.0
*/