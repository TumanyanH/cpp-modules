#include <iostream>
#include <ctime>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
    this->_amount = initial_deposit;
    Account::_totalAmount += initial_deposit;
    this->_nbWithdrawals = 0;
    this->_nbDeposits = 0;
    this->_accountIndex = this->_nbAccounts;
    this->_nbAccounts++;
    this->_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::Account( void )
{
    this->_amount = 0;
    this->_nbWithdrawals = 0;
    this->_nbDeposits = 0;
    this->_accountIndex = this->_nbAccounts;
    this->_nbAccounts++;
    this->_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account( void )
{
    this->_nbAccounts--;
    this->_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

int	    Account::getNbAccounts( void )
{
    return (Account::_nbAccounts);
}

int	    Account::getTotalAmount( void )
{
    return (Account::_totalAmount);
}

int	    Account::getNbDeposits( void )
{
    return (Account::_totalNbDeposits);
}

int	    Account::getNbWithdrawals( void )
{
    return (Account::_totalNbWithdrawals);
}

void    Account::displayAccountsInfos( void )
{
    Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    this->_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" <<  this->_amount << ";deposit:" << deposit << ";";
    this->_amount += deposit;
    Account::_totalAmount += deposit;
    std::cout << "amount:" << this->_amount << ";";
    this->_nbDeposits++;
    Account::_totalNbDeposits++;
    std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}
bool	Account::makeWithdrawal( int withdrawal )
{
    this->_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";";
    if (this->_amount < withdrawal)
    {
        std::cout << "withdrawal:refused" << std::endl;
        return (false);
    }
    else 
    {
        this->_nbWithdrawals++;
        Account::_totalNbWithdrawals++;
        this->_amount -= withdrawal;
        Account::_totalAmount -= withdrawal;
        std::cout << "amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    }
    return (true);
}

int		Account::checkAmount() const
{
    return (this->_amount > 0);
}

void	Account::displayStatus() const
{
    this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void    Account::_displayTimestamp( void )
{
    std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);
    std::cout << "[" << (now->tm_year + 1900) 
         << (now->tm_mon + 1)
         << now->tm_mday << "_"
         << now->tm_hour
         << now->tm_min
         << now->tm_sec
         << "] ";
}