/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 18:46:59 by fbesson           #+#    #+#             */
/*   Updated: 2024/03/03 18:47:01 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iomanip>
#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::checkAmount(void) const
{
	return(_amount);
}

int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void Account::_displayTimestamp( void )
{
    std::time_t now = std::time(NULL);
    std::tm* ptm = std::localtime(&now);
    std::cout << "[" 
              << (ptm->tm_year + 1900)
              << std::setw(2) << std::setfill('0') << (ptm->tm_mon + 1) 
              << std::setw(2) << std::setfill('0') << ptm->tm_mday << "_"
              << std::setw(2) << std::setfill('0') << ptm->tm_hour
              << std::setw(2) << std::setfill('0') << ptm->tm_min
              << std::setw(2) << std::setfill('0') << ptm->tm_sec
              << "] ";
}

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
	_totalAmount += _amount;
	_nbAccounts++;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" << std::endl;

}


bool Account::makeWithdrawal(int withdrawal)
{
	int p_amount;

	p_amount = checkAmount();
	if (withdrawal > p_amount)
	{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";";
		std::cout << "p_amount:" << p_amount << ";";
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << p_amount << ";";
	std::cout << "withdrawal:" << withdrawal << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_withdrawals:" << ++_nbWithdrawals << std::endl;
	_totalNbWithdrawals++;
	return (true);
}

void Account::makeDeposit(int deposit)
{
	int p_amount;
	p_amount = checkAmount();
	_amount += deposit;
	_totalAmount += deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << p_amount << ";";
	std::cout << "deposit:" << deposit <<";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_deposits:" << ++_nbDeposits << std::endl;
	_totalNbDeposits++;
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "whithdrawals:" << getNbWithdrawals() << std::endl;
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}
