#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <cstring>
#include <string>
#include <iomanip>


int Account:: _nbAccounts = 0;
int Account:: _totalAmount = 0;
int Account:: _totalNbDeposits = 0;
int Account:: _totalNbWithdrawals = 0;

Account:: Account( int initial_deposit)
{
	Account:: _displayTimestamp();
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = initial_deposit;
	Account:: _totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount" << this->_amount << ";";
	std::cout << "created" << std:: endl;
};

Account:: ~Account(void)
{
	Account:: _displayTimestamp();
	this->_nbAccounts--;
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount" << this->_amount << ";";
	std::cout << "closed" << std:: endl;
}

Account:: Account(void)
{
	Account:: _displayTimestamp();
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount" << this->_amount << ";";
	std::cout << "created" << std:: endl;
}

int	Account:: getNbAccounts(void)
{
	return (Account:: _nbAccounts);
}

int	Account:: getTotalAmount(void)
{
	return (Account:: _totalAmount);
}

int	Account:: getNbDeposits(void)
{
	return (Account:: _totalNbDeposits);
}

int	Account:: getNbWithdrawals(void)
{
	return (Account:: _totalNbWithdrawals);
}

void Account:: _displayTimestamp()
{
	std::time_t t = std::time(0);
	std::tm* now = std::localtime(&t);
	std::cout << "[" << std::setfill('0')
			  << std::setw(4)<< (now->tm_year + 1900)
			  << std::setw(2)<< (now->tm_mon + 1)
			  << std::setw(2) << now->tm_mday << "_"
			  << std::setw(2) << now->tm_hour
			  << std::setw(2) << now->tm_min
			  << std::setw(2) << now->tm_sec << "] ";
}

void	Account:: displayAccountsInfos(void)
{
	Account:: _displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std:: endl;
}

void	Account:: makeDeposit(int deposit)
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposits:" << deposit << ";";
	this->_amount += deposit;
	this->_totalAmount += deposit;
	std::cout << "amount:" << this->_amount << ";";
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	std::cout << "nb_deposits:" << this->_nbDeposits << std:: endl;

}

bool	Account:: makeWithdrawal(int withdrawal)
{
	int amountTemp = this->_amount;

	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	this->_amount -= withdrawal;
	if (this->checkAmount())
	{
		std::cout << "withdrawal:refused" << std::endl;
		this->_amount = amountTemp;
		return (false);
	}
	else
	{
		std::cout << "withdrawal:" << withdrawal << ";";
		this->_totalAmount -= withdrawal;
		std::cout << "amount:" << this->_amount << ";";
		this->_nbWithdrawals++;
		this->_totalNbWithdrawals++;
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std:: endl;
	}
	return (true);
}

int		Account:: checkAmount(void) const
{
	return (this->_amount < 0);
}

void	Account:: displayStatus(void) const
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std:: endl;

}