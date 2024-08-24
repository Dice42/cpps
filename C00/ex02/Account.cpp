/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 16:04:49 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/24 21:06:08 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

/* here we have initailize the static variable inside the class*/
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

/*
	The order in which the destructors are called may differ depending on
	your compiler/operating system. So your destructors may be called in
	a reverse order
*/


/* this is a private constructor been put in the private so it can take away the option 
	from the user to initalize them other wise c++ automatically initalize them */
Account::Account()
{
	/* Constructer */
	printf("im here inside the private constructor\n");
	return ;
}

Account::~Account(void)
{
	/* Destructor */
	return ;
}

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	std::cout << " index:" << _nbAccounts++  << ";" << initial_deposit << ";amount" << ";created" << std::endl;
	return ;
}


void	Account::makeDeposit(int deposit)
{
	return ;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	return(true);
}

int		Account::checkAmount(void) const
{
	return(0);
}

void	Account::displayStatus(void) const
{
	
	return ;
}

void	Account::displayAccountsInfos(void)
{
	return ;
}

void	Account::_displayTimestamp(void)
{
	time_t timestamp = time(NULL);
	std::tm datetime = *localtime(&timestamp);

	std::cout << '['
            << std::setw(2) << std::setfill('0') << datetime.tm_year + 1900	// Year
            << std::setw(2) << std::setfill('0') << datetime.tm_mon + 1		// Month
            << std::setw(2) << std::setfill('0') << datetime.tm_mday		// Day
            << "_"
            << std::setw(2) << std::setfill('0') << datetime.tm_hour		// Hours
            << std::setw(2) << std::setfill('0') << datetime.tm_min			// Minutes
            << std::setw(2) << std::setfill('0') << datetime.tm_sec			// Seconds
            << ']';
}

/* getters */
int		Account::getNbAccounts(void)
{
	return (_nbAccounts);
}
int		Account::getTotalAmount(void)
{
	return (_totalAmount);
}
int		Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}
int		Account::getNbWithdrawals(void)
{
	return (_totalNbDeposits);
}
