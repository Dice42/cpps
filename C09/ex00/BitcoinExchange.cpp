/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:45:10 by mohammoh          #+#    #+#             */
/*   Updated: 2024/10/04 15:28:29 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange&	BitcoinExchange::operator=(const BitcoinExchange& rhs)
{
	this->_line = rhs._line;
	this->_database = rhs._database;
	return (*this);
}
BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) {*this = other;}
BitcoinExchange::BitcoinExchange(){}
BitcoinExchange::~BitcoinExchange(){}
BitcoinExchange::BitcoinExchange(std::string database_file) {_loadData(database_file);}

/* loading database */
void	BitcoinExchange::_loadData(std::string database_file)
{
	std::fstream	csv;
	std::string		line;
	t_data			data;
	
	csv.open(database_file.c_str());
	if (!csv.is_open())
	{
		std::cout << BOLD << "Error: Cannot open file." << RESET<< database_file <<std::endl;
		throw CannotOpenFileException();
	}
	std::getline(csv, line);
	while(std::getline(csv, line))
	{
		data.date = line.substr(0, line.find(","));
		data.year = std::atoi(data.date.substr(0, data.date.find("-")).c_str());
		data.month = std::atoi(data.date.substr(data.date.find("-")+1, data.date.find_last_of("-")).c_str()); 
		data.day = std::atoi(data.date.substr(data.date.find_last_of("-")+1).c_str());
		data.value = std::strtod(line.substr(line.find(",")).c_str() + 1, NULL);
		_database.push_back(data);
	}
}

bool 	BitcoinExchange::_isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int		BitcoinExchange::_daysInMonth(void)
{
	int daysInMonth = 31;
    switch (_line.month)
	{
        case FEB:
            daysInMonth = _isLeapYear(_line.year) ? 29 : 28;
            break;
        case APR: case JUN: case SEP: case NOV:
            daysInMonth = 30;
            break;
    }
	return (daysInMonth);
}

bool	BitcoinExchange::_checkDate(void)
{
	_line.date = 	_line.line.substr(0, _line.line.find(" |"));
	if (_line.date.size() != 10 || _line.date[4] != '-' || _line.date[7] != '-')
		return (std::cout << BOLD << "Error: Wrong date! => " << _line.date << RESET << std::endl, false);	
    std::string year = _line.date.substr(0, 4);
    std::string month = _line.date.substr(5, 2);
    std::string day = _line.date.substr(8, 2);
    std::string date = year + month + day;
    for (size_t i = 0; i < date.size(); ++i)
	{
        if (!std::isdigit(date[i]))
            return (std::cout << BOLD << "Error: Wrong date! => " << _line.date << RESET << std::endl, false);
    }
	_line.year = std::atoi(year.c_str());
	_line.month = std::atoi(month.c_str());
	_line.day = std::atoi(day.c_str());
	
	if ((_line.year < 2009 || _line.year > 2024) 
			|| (_line.month < 1 || _line.month > 12)
				|| (_line.day < 1 || _line.day > _daysInMonth()))
		return (std::cout << BOLD << "Error: bad input! => " << _line.date << RESET << std::endl, false);
	return true;
}

bool	BitcoinExchange::_checkValue(void)
{
	std::string		values;
	char			*end;

	values = _line.line.substr(_line.line.find("| ") + 1);
	_line.value = std::strtod(values.c_str(), &end);
	
	if(end[0] != '\0')
		return (std::cout << BOLD << "Error: bad value." << RESET << std::endl, false);
	if (_line.value < 0)
		return (std::cout << BOLD << "Error: not a positive number." << RESET << std::endl, false);
	else if (_line.value > 1000)
		return (std::cout << BOLD << "Error: too large a number." << RESET << std::endl, false);
	return true;
}

void	BitcoinExchange::_nearestDate(void)
{
	std::vector<t_data>::iterator		itr;

	for(itr = _database.end() - 1; itr > _database.begin(); itr--)
	{
		if (itr->year < _line.year || 
            (itr->year == _line.year && itr->month < _line.month) || 
            (itr->year == _line.year && itr->month == _line.month && itr->day < _line.day))
		{
			std::cout << _line.date << " => " << _line.value << " = " 
						<< _line.value * itr->value << std::endl;
			break;
		}
	}
}

void	BitcoinExchange::_exchange(void)
{
	std::vector<t_data>::iterator		itr;

	for(itr = _database.begin(); itr < _database.end(); itr++)
	{
		if (itr->date.compare(_line.date) == 0)
		{
			std::cout << _line.date << " => " << _line.value << " = " 
						<< _line.value * itr->value << std::endl;
			return ;
		}
	}
	if (itr == _database.end())
		_nearestDate();
}

void	BitcoinExchange::_checkLine(void)
{
	if (!_checkDate() || !_checkValue())
		return ;
	_exchange();
}

void	BitcoinExchange::exchange(std::string data)
{
	std::fstream					fdata;

	fdata.open(data.c_str());
	if (!fdata.is_open())
	{
		std::cout << BOLD << "Error: Cannot open file " << data << RESET << std::endl;
		throw CannotOpenFileException();
	}
	
	std::getline(fdata, _line.line);
	if (_line.line != "date | value")
			throw HeaderNotFoundException();
	while (std::getline(fdata, _line.line))
	{
		if (_line.line.empty())
			continue;
		else
			_checkLine();
	}
}

const char* 	BitcoinExchange::CannotOpenFileException::what() const throw()
{
	return ("Cannot Open File!");
}

const char* 	BitcoinExchange::HeaderNotFoundException::what() const throw()
{
	return ("Header Not Found!");
}