/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:11:06 by maperrea          #+#    #+#             */
/*   Updated: 2021/10/28 15:22:32 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

void Account::_displayTimestamp()
{
	std::time_t time = std::time(NULL);
	std::tm *local = std::localtime(&time);
	std::cout << "["
		<< std::setfill('0') << std::setw(2) << local->tm_year + 1900
		<< std::setfill('0') << std::setw(2) << local->tm_mon + 1
		<< std::setfill('0') << std::setw(2) << local->tm_mday
		<< "_"
		<< std::setfill('0') << std::setw(2) << local->tm_hour
		<< std::setfill('0') << std::setw(2) << local->tm_min
		<< std::setfill('0') << std::setw(2) << local->tm_sec
		<< "]";
}

int Account::getNbAccounts()
{
	return (_nbAccounts);
}

int Account::getTotalAmount()
{
	return (_totalAmount);
}

int Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts
		<< ";total:" << _totalAmount
		<< ";deposits:" << _totalNbDeposits
		<< ";withdrawals:" << _totalNbWithdrawals
		<< std::endl;
}

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";created" << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";closed" << std::endl;
}

void Account::makeDeposit(int deposit)
{
	int	p_amount = _amount;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits += 1;
	_totalNbDeposits += 1;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex
		<< ";p_amount:" << p_amount
		<< ";deposit:" << deposit
		<< ";amount:" << _amount
		<< ";nb_deposits:" << _nbDeposits
		<< std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	int	p_amount = _amount;
	if (withdrawal > _amount)
	{
		_displayTimestamp();
		std::cout << " index:" << _accountIndex
			<< ";p_amount:" << p_amount
			<< ";withdrawal:refused" << std::endl;
		return false;
	}
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals += 1;
	_totalNbWithdrawals += 1;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex
		<< ";p_amount:" << p_amount
		<< ";withdrawal:" << withdrawal
		<< ";amount:" << _amount
		<< ";nb_withdrawals:" << _nbWithdrawals
		<< std::endl;
	return true;
}

int Account::checkAmount() const
{
	return (_amount);
}

void Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";deposits:" << _nbDeposits
		<< ";withdrawals:" << _nbWithdrawals
		<< std::endl;
}
