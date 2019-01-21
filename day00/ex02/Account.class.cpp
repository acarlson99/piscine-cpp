// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Account.class.cpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/21 09:02:13 by acarlson          #+#    #+#             //
//   Updated: 2019/01/21 10:56:58 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Account.class.hpp"

Account::Account(int initial_deposit)
{
	(void)initial_deposit;
}

Account::~Account()
{
}


static int	getNbAccounts( void )
{
	return (0);
}

static int	getTotalAmount( void )
{
	return (0);
}

static int	getNbDeposits( void )
{
	return (0);
}

static int	getNbWithdrawals( void )
{
	return (0);
}

static void	displayAccountsInfos( void );

void	makeDeposit( int deposit )
{
	(void)deposit;
}
bool	makeWithdrawal( int withdrawal )
{
	(void)withdrawal;
	return (false);
}

int		checkAmount( void ) const
{
	return (0);
}

void	displayStatus( void ) const
{
}

static void	_displayTimestamp( void )
{
}
