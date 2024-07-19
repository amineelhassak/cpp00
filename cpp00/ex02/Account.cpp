/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 22:20:41 by amel-has          #+#    #+#             */
/*   Updated: 2024/07/19 08:51:21 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void)
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

void    Account::displayAccountsInfos( void )   
{
    Account::_displayTimestamp();
    std::cout <<"accounts:"<<Account::getNbAccounts()<<";total:"<<Account::getTotalAmount() \
    <<";deposits:" << Account::getNbDeposits()<<";withdrawals:"<<Account::getNbWithdrawals()<<std::endl;
}

Account::Account( int initial_deposit )
{
    this->_amount = initial_deposit;
    Account::_totalAmount += initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    this->_accountIndex = this->_nbAccounts;
    this->_nbAccounts++;
    Account::_displayTimestamp();
    std::cout<<"index:"<<this->_accountIndex<<";amount:"<<this->_amount<<";created"<<std::endl;
}
Account::~Account( void )
{
    this->_nbAccounts--;
    Account::_displayTimestamp();
    std::cout<<"index:"<<this->_accountIndex<<";amount:"<<this->_amount<<";closed"<<std::endl;
}

void	Account::makeDeposit( int deposit )
{
    Account::_displayTimestamp();
    std::cout<<"index:"<< this->_accountIndex<<";p_amount:"<<this->_amount\
    <<";deposit:"<<deposit;
    Account::_totalAmount += deposit;
    this->_amount += deposit;
    Account::_totalNbDeposits++;
    this->_nbDeposits++;
    std::cout << ";amount:" << this->_amount<<";nb_deposits:"<< this->_nbDeposits<<std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    if (withdrawal < this->_amount)
    {
        Account::_displayTimestamp();
        std::cout << "index:" << this->_accountIndex<<";p_amount:"<<this->_amount<<";withdrawal:"<<withdrawal;
        Account::_totalAmount -= withdrawal;
        this->_amount -= withdrawal;
        Account::_totalNbWithdrawals++;
        this->_nbWithdrawals++;
        std::cout << ";amount:" << this->_amount<<";nb_withdrawals:"<< this->_nbWithdrawals<<std::endl;
        return (true);
    }
    else
    {
        Account::_displayTimestamp();
        std::cout << "index:" << this->_accountIndex<<";p_amount:"<<this->_amount<<";withdrawal:refused"<<std::endl;
        return (false);
    }
}

int		Account::checkAmount( void ) const
{
    return (_amount);
}

void	Account::displayStatus( void ) const
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex \
    << ";amount:" << this->_amount \
    << ";deposits:" << this->_nbDeposits \
    << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void    Account::_displayTimestamp()
{
    time_t now = time(0);
    struct tm* localTime = localtime(&now);

    int Y = localTime->tm_year + 1900;
    int m = localTime->tm_mon + 1;
    int D = localTime->tm_mday;
    int H = localTime->tm_hour;
    int M = localTime->tm_min;
    int S = localTime->tm_sec;
    std::cout << "[";
    std::cout<< std::setw(4) << std::setfill('0') << (Y);
    std::cout<< std::setw(2) << std::setfill('0') << (m);
    std::cout<< std::setw(2) << std::setfill('0') << (D) << "_";
    std::cout<< std::setw(2) << std::setfill('0') << (H);
    std::cout<< std::setw(2) << std::setfill('0') << (M);
    std::cout<< std::setw(2) << std::setfill('0') << (S) << "] ";
}