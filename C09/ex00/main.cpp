/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:45:05 by mohammoh          #+#    #+#             */
/*   Updated: 2024/10/02 21:02:59 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// std::pair<std::vector<int>, std::vector<std::string> >	csv_data(std::fstream& file)
// {
// 	std::vector<std::string>							dates;
// 	std::vector<int>								 	exchange_rate;
// 	std::string		 									line;

// 	std::getline(file, line);
// 	while(std::getline(file, line))
// 	{
// 		std::string date = line.substr(0, line.find(","));
// 		double value = std::strtod(line.substr(line.find(",")).c_str() + 1, NULL);
// 		exchange_rate.push_back(static_cast<int>(value));
// 		dates.push_back(date);
// 	}
// 	std::pair<std::vector<int>, std::vector<std::string> >	btc_data(exchange_rate, dates);
// 	return (btc_data);
// }

void		check_line(std::string line)
{
	std::string		date;
	int				year;
	int				month;
	int				day;

	date = 	line.substr(0, line.find(" |"));
	if (date.size() != 10)
		return (std::cout << "Wrong date! >>" << date << std::endl, void());
	
	year = std::atoi(date.substr(0, date.find("-")).c_str());
	month = std::atoi(date.substr(date.find("-")+1, date.find_last_of("-")).c_str()); 
	day = std::atoi(date.substr(date.find_last_of("-")+1).c_str());
	

	/*leap year in feb */
	if ((year < 2009 || year > 2024) || (month < 0 || month > 12) || ( day < 0 || day > 31))
		return (std::cout << "Wrong date / bad input! >> " << date << std::endl, void());

	std::string		values;
	double			value;
	char			*end;

	values = line.substr(line.find("| ") + 1);
	value = std::strtod(values.c_str(), &end);
	
	if(end[0] != '\0')
		std::cout << "error: bad value\n";

	if (value < 0)
		std::cout << "Error: not a positive number.\n";
	else if (value > 1000)
		std::cout << "Error: not a positive number\n";
	else
		/*i want to multiply the */
		
	
}

int main(int ac, char **av)
{
	if (ac == 2)
	{

		/*load data base */
		BitcoinExchange									btc("data.csv");
		std::fstream									database(av[1]);

		if(database.fail())
			return(std::cout << "Error: in opening the file\n", 0);
		
		// std::pair<std::vector<int>, std::vector<std::string> > btc = csv_data(csv);

		std::string line;
		std::vector<std::string>							dates;
		std::getline(database, line);
		while (std::getline(database, line))
		{
			check_line(line);
			
						
		}

		// // btc::iterator 
		// int	i(1);
		// std::vector<int>::iterator itr;
		// std::cout << "exchange rate: \n";
		// for (itr = btc.first.begin(); i < 10 && itr < btc.first.end(); itr++)
		// 	std::cout << i++ << "\t" << *itr << std::endl;
			
		// std::cout << "--------------------------\n";
		
		// i = 1;
		// std::vector<std::string>::iterator itr2;
		// std::cout << "dates: \n";
		// for (itr2 = btc.second.begin();  i < 10 && itr2 < btc.second.end(); itr2++)
		// 	std::cout  << i++ << "\t" << *itr2 << std::endl;
			
		// typedef std::pair<data_t::iterator, values_t::iterator> 		btc_t;
	/* this program will take two databases 
		in the seconed database we will store the different prices/dates to evaluate

		the program must take a file as an arugment 
		each line in this file must use the following format: "date | value "

		a valid date will always be in the following format year-month-day.
		
		a valid value must be either a float or a positive integer. between 0 and 1000


		on the standard output the result of the value multiplied by the exchange rate according to
		the date indicated in your database 


		if the data used in the input does not exist in the database then:
			use the closest date contained in your DB
			use the lower date and not the upper one 
	*/	
	}
	else
		std::cout << "Error: could not open file." << std::endl;
	return 0;
}

/*
$> ./btc
Error: could not open file.
$> ./btc input.txt
2011-01-03 => 3 = 0.9
2011-01-03 => 2 = 0.6
2011-01-03 => 1 = 0.3
2011-01-03 => 1.2 = 0.36
2011-01-09 => 1 = 0.32
Error: not a positive number.
Error: bad input => 2001-42-42
2012-01-11 => 1 = 7.1
Error: too large a number.
$*/


/*first i need to validate each line the format date | value*/

/*i need to validate the date */
/*value must be either a float or a positive intger between 0 and 1000*/


// we can construct the file in btc 