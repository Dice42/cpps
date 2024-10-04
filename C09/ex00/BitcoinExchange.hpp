/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 17:02:15 by mohammoh          #+#    #+#             */
/*   Updated: 2024/10/04 21:01:49 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE
#define BITCOINEXCHANGE

#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <stdexcept>

#define FEB 2
#define APR	4
#define JUN 6
#define SEP 9
#define NOV 11

#define RESET		"\033[0m"
#define BOLD		"\033[1m"

typedef struct s_data
{
	int				year;
	int				month;
	int				day;
	double			value;
	std::string		date;
	std::string 	line;

} t_data;

class BitcoinExchange
{
	private:
		t_data						_line;
		std::vector<t_data>			_database;

		void	_loadData(std::string database);
		void	_checkLine(void);
		bool	_checkDate(void);
		bool 	_isLeapYear(int year);
		int		_daysInMonth(void);
		bool	_checkValue(void);
		void	_exchange(void);
		void	_nearestDate(void);
		BitcoinExchange(void);

	protected:
		class CannotOpenFileException : public std::exception {
			public:
				const char* what() const throw();
		};
		class HeaderNotFoundException : public std::exception {
			public:
				const char* what() const throw();
		};
	
	public:
		BitcoinExchange(std::string database_file);
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& other);
		BitcoinExchange&	operator=(const BitcoinExchange& rhs);
	


	/*member functions*/
		void	exchange(std::string data);
};
#endif


