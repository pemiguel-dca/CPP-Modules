/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:07:07 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/17 14:25:04 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

//Initialize static private members
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_accountIndex = _nbAccounts;
	_nbAccounts += 1;
	this->_amount = initial_deposit;
	this->_totalAmount += _amount;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	std::cout << "Account Created!"
			<< " Account number: "
			<< this->_accountIndex
			<< " Current amount: "
			<< this->_amount << std::endl;
}

Account::~Account(void) {
	_nbAccounts -= 1;
	this->_displayTimestamp();
	std::cout << "Account Deleted!"
			<< " Account number: "
			<< this->_accountIndex
			<< " Amount lost :) : "
			<< this->_amount << std::endl;
}

//This is how we have access to private class members
int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::_displayTimestamp(void)
{
	time_t now = time(0);
	char* dt = ctime(&now);

	std::cout << "Timestamp: " << dt << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_nbDeposits += 1;
	_totalNbDeposits += 1;
	_totalAmount += deposit;
	_amount += deposit;
	std::cout << "You just deposit: " << deposit << "$"
				<< "Current amount: " << _amount << "$" << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal > _amount)
	{
		std::cout << "You don't have that much money!"
				<< "Here's your money: " << _amount << "$" << std::endl;
		return (false);
	}
	_totalNbWithdrawals += 1;
	_nbWithdrawals += 1;
	_amount -= withdrawal;
	_totalAmount = withdrawal;
	std::cout << "Account number: " << _accountIndex
				<< " just withdrawal: " << withdrawal << "$"
				<< " current amount: " << _amount << "$" << std::endl;
	return (true);
}

int	Account::checkAmount(void) const
{
	return (_amount);
}

void	Account::displayStatus(void) const
{
	this->_displayTimestamp();
	std::cout << "Account number: " << _accountIndex << std::endl
				<<	"Current amount: " << _amount << std::endl
				<<	"Number deposits: " << _nbDeposits << std::endl
				<<	"Number withdrawals: " << _nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "Number of accounts: " << getNbAccounts() << std::endl
				<<	"Total amount: " << getTotalAmount() << std::endl
				<<	"Total number deposits: " << getNbDeposits() << std::endl
				<<	"Total number withdrawals: " << getNbWithdrawals() << std::endl;
}
