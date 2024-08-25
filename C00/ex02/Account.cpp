/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 16:04:49 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/25 15:42:00 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

/* initailize the static variables, static variables works like a global vairables */
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account() {}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex
			  << ";amount:" << _amount
			  << ";closed" << std::endl;
	return ;
}

Account::Account(int initial_deposit) : _accountIndex(0), _amount(0), _nbDeposits(0), _nbWithdrawals(0)
{
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex
			  << ";amount:" << _amount
			  << ";created" << std::endl;
	return ;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << ";amount:" << _amount
			  << ";nb_deposits:" << _nbDeposits
			  << std::endl;
	return ;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";p_amount:" << _amount;
	if (withdrawal > _amount)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return(false);
	}
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout << ";withdrawal:" << withdrawal
				<< ";amount:" << _amount
				<< ";nb_withdrawals:" << _nbWithdrawals
				<< std::endl;
	return(true);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex
			  << ";amount:" << _amount
			  << ";deposits:" << _nbDeposits
			  << ";withdrawals:" << _nbWithdrawals
			  << std::endl;
	return ;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts
			  << ";total:" << _totalAmount
			  << ";deposits:" << _totalNbDeposits
			  << ";withdrawals:" << _totalNbWithdrawals
			  << std::endl;
	return ;
}

void	Account::_displayTimestamp(void)
{
	time_t timestamp = time(NULL);
	std::tm datetime = *localtime(&timestamp);

	std::cout << '['
            << std::setw(2) << std::setfill('0') << datetime.tm_year + 1900
            << std::setw(2) << std::setfill('0') << datetime.tm_mon + 1		
            << std::setw(2) << std::setfill('0') << datetime.tm_mday
            << "_"
            << std::setw(2) << std::setfill('0') << datetime.tm_hour
            << std::setw(2) << std::setfill('0') << datetime.tm_min
            << std::setw(2) << std::setfill('0') << datetime.tm_sec
            << ']';
}

int		Account::checkAmount(void) const {return(0);}

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
