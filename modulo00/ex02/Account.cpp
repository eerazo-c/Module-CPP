/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 16:31:40 by elerazo-          #+#    #+#             */
/*   Updated: 2026/02/05 17:04:11 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Account.hpp"
#include <cmath>
#include <iostream>
#include <time.h>
#include <ctime.h>
//initial atributes
int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void ) {return Account::_nbAccounts;}
int	Account::getTotalAmount( void ) {return Account::_totalAmount;}
int	Account::getNbDeposits( void ) {return Account::_totalNbDeposits;}
int	Account::getNbWithdrawals( void ) {return Account::_totalNbWithdrawals;}

void Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();

	std::cout << ";accounts: " << Account::getNbAccounts() << 
		";total: " << Account::getTotalAmount() <<
		";deposit: " << Account::getNbDeposits() <<
		";withdrawal: " << Account::getNbWithdrawals() << std::endl;
}

//Constructor
Account::Account(int initial_deposit)
{
	this->_accountIndex = Account::_nbAccounts;
	this->_amount = Account::initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;

	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex <<
		";accounts:" << this->checkAmount() <<
		";created" << std::endl;
};

//Destructor
Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex <<
		";accounts:" << this->checkAmount() <<
		";closed" << std::endl;
};

//miembros
void Account::makeDeposit(int deposit)
{
}


bool Account::makeWithdrawal(int withdrawal)
{

}

int Account::checkAmount()
{
	return this->_amount;
}

void Account::displayStatus(void)
{

}

void Account::_displayTimestamp(void)
{
	char buffer[20];

	std::time_t timer = std::time(NULL);
	std::tm *humtime = std::localtime();
}
