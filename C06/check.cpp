/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 19:52:02 by mohammoh          #+#    #+#             */
/*   Updated: 2024/09/20 22:17:05 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <limits>
#include <string>
#include <iomanip>

int main (int ac, char **av)
{
	(void)ac;
	long double value;
	char		*end;

	value = std::strtold(av[1], &end);
	
	if ((value >= std::numeric_limits<int>::min() && value <= std::numeric_limits<int>::max()) 
		&& (static_cast<std::string>(av[1]).find('.') == std::string::npos))
		std::cout << "integer" << std::endl;
	else if ((value >= -std::numeric_limits<float>::max() && value <= std::numeric_limits<float>::max())
				&& (static_cast<std::string>(av[1]).find('.') != std::string::npos) && (end[0] == 'f' && static_cast<std::string>(end).size() == 1))
		std::cout << "float" << std::endl;
	else if ((value >= -std::numeric_limits<float>::max() && value <= std::numeric_limits<float>::max())
				&& (static_cast<std::string>(av[1]).find('.') != std::string::npos) && end[0] == '\0')
		std::cout << "double" << std::endl;
	
	std::cout << "value: "<< std::fixed << value << std::endl;
	std::cout << "end  : " << end << std::endl;

	std::string n;


}