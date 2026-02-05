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
#include <iomanip>
#include <ctime>

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
		";deposits: " << Account::getNbDeposits() <<
		";withdrawals: " << Account::getNbWithdrawals() << std::endl;
}

//Constructor
Account::Account( int initial_deposit ){
	this->_accountIndex = Account::_nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;

	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex <<
		";accounts:" << this->checkAmount() <<
		";created" << std::endl;
}

//Destructor
Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex <<
		";accounts:" << this->checkAmount() <<
		";closed" << std::endl;
}

//miembros
void Account::makeDeposit(int deposit)
{
	int _pamount = this->checkAmount();
    this->_amount += deposit;
    this->_nbDeposits++;

    Account::_totalAmount += deposit;
    Account::_totalNbDeposits++;

    Account::_displayTimestamp();
    std::cout <<
    " index:" << this->_accountIndex <<
    ";p_amount:" << _pamount <<
    ";deposit:" << deposit <<
    ";amount:" << this->checkAmount() <<
    ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	int p_amount = this->checkAmount();

    Account::_displayTimestamp();
    std::cout <<
    " index:" << this->_accountIndex <<
    ";p_amount:" << p_amount <<
    ";withdrawal:";
    if (withdrawal > this->_amount)
    {
        std::cout << "refused" << std::endl;
        return false;
    }
    else
    {
        this->_amount -= withdrawal;
        this->_nbWithdrawals++;
        Account::_totalAmount -= withdrawal;
        Account::_totalNbWithdrawals++;

        std::cout <<
        withdrawal <<
        ";amount:" << this->_amount <<
        ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
        return true;
    }
}

int Account::checkAmount() const
{
	return this->_amount;
}

void Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout 
		<< " index:" << this->_accountIndex
		<< ";amount:" << this->checkAmount() 
		<< ";deposits:" << this->_nbDeposits 
		<< ";withdrawals" << this-> _nbWithdrawals 
		<< std::endl;
}

void Account::_displayTimestamp(void)
{
	char buffer[20];

	std::time_t timer = std::time(NULL);
	std::tm humtime = *std::localtime(&timer);
	std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", &humtime);
	std::cout << "[" << buffer << "]"; 
}
