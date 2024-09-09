/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 23:45:11 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/23 23:30:50 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
 #include <clocale>

int main (int ac, char **av)
{
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int i = 1 ; av[i] ; i++)
			for (int j = 0; av[i][j]; j++)
				std::cout  << (char)std::toupper(av[i][j]);
	std::cout << std::endl;
	return (0);
}
