/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 17:02:15 by mohammoh          #+#    #+#             */
/*   Updated: 2024/10/02 21:07:28 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE
#define BITCOINEXCHANGE

#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>

class BitcoinExchange
{
	private:
		std::vector<int>			exchange_rate;
		std::vector<std::string>	dates;
	
	public:
		BitcoinExchange(std::string database);
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& other);
		BitcoinExchange&	operator=(const BitcoinExchange& rhs);
	


	/*member functions*/
};
#endif


