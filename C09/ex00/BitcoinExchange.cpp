/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:45:10 by mohammoh          #+#    #+#             */
/*   Updated: 2024/10/02 21:04:35 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "BitcoinExchange.hpp"

// BitcoinExchange&	BitcoinExchange::operator=(const BitcoinExchange& rhs);
// BitcoinExchange::BitcoinExchange(const BitcoinExchange& other);
BitcoinExchange::~BitcoinExchange(){}
BitcoinExchange::BitcoinExchange(std::string database)
{
	std::fstream	csv(database);
	std::string		line;
	
	if (csv.fail())
		throw EXIT_FAILURE;

	std::getline(csv, line);
	while(std::getline(csv, line))
	{
		std::string date = line.substr(0, line.find(","));
		double value = std::strtod(line.substr(line.find(",")).c_str() + 1, NULL);
		exchange_rate.push_back(static_cast<int>(value));
		dates.push_back(date);
	}
}