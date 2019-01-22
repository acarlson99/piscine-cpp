// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Account.class.cpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/21 09:02:13 by acarlson          #+#    #+#             //
//   Updated: 2019/01/21 16:32:44 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Account.class.hpp"
#include <iostream>
#include <iomanip>
#include <chrono>
#include <ctime>

Account::Account( int initial_deposit )
{
	_displayTimestamp();
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_totalAmount += this->_amount;
	std::cout << "index:" << _nbAccounts << ";amount:" << _amount << ";created" << std::endl;
	++_nbAccounts;
}

Account::Account( void )
{
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
	--_nbAccounts;
}

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
//	std::cout << "makeDeposit" << std::endl;
	this->_amount += deposit;
	++this->_nbDeposits;
}

bool	Account::makeWithdrawal( int withdrawal )
{
//	std::cout << "makeWithdrawal" << std::endl;
	if (this->_amount >= withdrawal)
	{
		this->_amount -= withdrawal;
		++this->_nbWithdrawals;
		return (true);
	}
	return (false);
}

int		Account::checkAmount( void ) const
{
	std::cout << "checkAmount" << std::endl;
	return (_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	time_t now = time(0);
	tm *ltm = localtime(&now);
	std::cout << "["\
			  << ltm->tm_year  + 1900\
			  << std::setfill('0') << std::setw(2) << ltm->tm_mon + 1\
			  << std::setfill('0') << std::setw(2) << ltm->tm_mday\
			  << "_"\
			  << std::setfill('0') << std::setw(2) << ltm->tm_hour\
			  << std::setfill('0') << std::setw(2) << ltm->tm_min\
			  << std::setfill('0') << std::setw(2) << ltm->tm_sec\
			  << "] ";
}

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;
