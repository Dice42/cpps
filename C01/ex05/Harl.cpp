/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:07:31 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/28 21:21:53 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << GREEN << "[ DEBUG ]" << RESET << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
	std::cout << "I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << BLUE << "[ INFO ]" << RESET << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << YELLOW << "[ WARNING ]" << RESET << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << RED << "[ ERROR ]" << RESET << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}



void	Harl::complain(std::string level)
{
    void		(Harl::*functionptr[4])();
	std::string arr[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
    functionptr[0] = &Harl::debug;
    functionptr[1] = &Harl::info;
    functionptr[2] = &Harl::warning;
    functionptr[3] = &Harl::error;
	
	int i = 0;
	while (i < 4)
	{
		if (arr[i].compare(level.c_str()) == 0)
			break;
		i++;
	}
	
	switch (i)
	{
		case 0: (this->*functionptr[0])();
			break;
		case 1: (this->*functionptr[1])();
			break;
		case 2: (this->*functionptr[2])();
			break;
		default: (this->*functionptr[3])();
			break;
	}

}
