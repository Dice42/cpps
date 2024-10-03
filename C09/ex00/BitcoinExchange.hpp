/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 17:02:15 by mohammoh          #+#    #+#             */
/*   Updated: 2024/10/03 15:57:00 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE
#define BITCOINEXCHANGE

#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>


typedef struct s_data
{
	int				year;
	int				month;
	int				day;
	double			value;
	std::string 	line;

} t_data;

class BitcoinExchange
{
	private:
		t_data						_line;
		std::vector<t_data>			_database;

		void	_check_line(void);
		bool	_check_date(void);
		bool	_check_value(void);
		


	public:
		BitcoinExchange(std::string database_file);
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& other);
		BitcoinExchange&	operator=(const BitcoinExchange& rhs);
	


	/*member functions*/
		void	exchange(std::string data);
};
#endif


