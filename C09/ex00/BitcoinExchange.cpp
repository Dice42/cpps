/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:45:10 by mohammoh          #+#    #+#             */
/*   Updated: 2024/10/03 20:40:06 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "BitcoinExchange.hpp"

// BitcoinExchange&	BitcoinExchange::operator=(const BitcoinExchange& rhs);
// BitcoinExchange::BitcoinExchange(const BitcoinExchange& other);
BitcoinExchange::~BitcoinExchange(){}
BitcoinExchange::BitcoinExchange(std::string database_file)
{
	std::fstream	csv(database_file);
	std::string		line;
	t_data			data;
	
	if (csv.fail())
		throw EXIT_FAILURE;

	std::getline(csv, line);
	while(std::getline(csv, line))
	{
		std::string date = line.substr(0, line.find(","));
		data.year = std::atoi(date.substr(0, date.find("-")).c_str());
		data.month = std::atoi(date.substr(date.find("-")+1, date.find_last_of("-")).c_str()); 
		data.day = std::atoi(date.substr(date.find_last_of("-")+1).c_str());
		data.value = std::strtod(line.substr(line.find(",")).c_str() + 1, NULL);
		_database.push_back(data);
	}

	std::vector<t_data>::iterator		itr;

	for(itr = _database.begin(); itr < _database.end(); itr++)
	{
		std::cout << "itr->value: " << itr->value << std::endl;
		std::cout << "itr->year: "<< itr->year << std::endl;
		std::cout << "itr->month: "<< itr->month << std::endl;
		std::cout << "itr->day: "<< itr->day << std::endl;
		exit(1);
	}
}

bool	BitcoinExchange::_check_date(void)
{
	std::string		date;

	date = 	_line.line.substr(0, _line.line.find(" |"));
	if (date.size() != 10)
		return (std::cout << "Wrong date! >>" << date << std::endl, false);
	
	_line.year = std::atoi(date.substr(0, date.find("-")).c_str());
	_line.month = std::atoi(date.substr(date.find("-")+1, date.find_last_of("-")).c_str()); 
	_line.day = std::atoi(date.substr(date.find_last_of("-")+1).c_str());
	
	/*check leap year in feb */
	if ((_line.year < 2009 || _line.year > 2024) || (_line.month < 0 || _line.month > 12) || ( _line.day < 0 || _line.day > 31))
		return (std::cout << "Wrong date / bad input! >> " << date << std::endl, false);
	return true;
}

bool	BitcoinExchange::_check_value(void)
{
	std::string		values;
	char			*end;

	values = _line.line.substr(_line.line.find("| ") + 1);
	_line.value = std::strtod(values.c_str(), &end);
	
	if(end[0] != '\0')
		return (std::cout << "error: bad value\n", false);
	if (_line.value < 0)
		return (std::cout << "Error: not a positive number.\n", false);
	else if (_line.value > 1000)
		return (std::cout << "Error: not a positive number\n", false);
	return true;
}

void	BitcoinExchange::_check_line(void)
{
	
	if (!_check_date())
		return ;
	if (!_check_value())
		return ;
	
	/*i want to multiply the */
		
	/*first i need to find the date corrsponding to the date*/
}

void	BitcoinExchange::exchange(std::string data)
{
	std::fstream					fdata(data);

	if(fdata.fail())
		throw EXIT_FAILURE;
	while (std::getline(fdata, _line.line))
	{
		if (_line.line.empty())
			continue;
		else
			_check_line();
	}
	
	
}