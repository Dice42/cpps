/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 21:12:23 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/28 21:17:17 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl harl;

	if (ac == 2)
		harl.complain(av[1]);
	else
		std::cout << RED << "ERROR: " << RESET << "Wrong number of parameters" << std::endl;
    return 0;
}
