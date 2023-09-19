#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			  << ";amount:" << this->_amount
			  << ";deposits:" << this->_nbDeposits
			  << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

int	Account::getNbAccounts( void ) {
	return _nbAccounts;
}

int	Account::getTotalAmount( void ) {
	return _totalAmount;
}

int	Account::getNbDeposits( void ) {
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {
	return _totalNbWithdrawals;
}

void	Account::_displayTimestamp( void ) {
	std::time_t time = std::time(0);
	std::tm* now = std::localtime(&time);
	std::cout << "["
			  << (now->tm_year + 1900)
			  << std::setw(2) << std::setfill('0')
			  << (now->tm_mon + 1)
			  << (now->tm_mday) << "_"
			  << (now->tm_hour)
			  << (now->tm_min)
			  << (now->tm_sec) << "] ";
}

void	Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts
			  << ";total:" << _totalAmount
			  << ";deposits:" << _totalNbDeposits
			  << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

Account::Account( int initial_deposit ) {
	_accountIndex = _nbAccounts;
	_totalAmount += initial_deposit;
	++_nbAccounts;
	_amount = initial_deposit;
	_nbWithdrawals = 0;
	_nbDeposits = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";amount:" << initial_deposit
			  << ";created" << std::endl;
}

Account::~Account( void ) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";closed" << std::endl;
}

void	Account::makeDeposit( int deposit ) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";p_amount:" << _amount;
	++_nbDeposits;
	++_totalNbDeposits;
	_amount += deposit;
	_totalAmount += deposit;
	std::cout     << ";deposit:" << deposit
				  << ";amount:" << _amount
				  << ";nb_deposits:" << _nbDeposits <<std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";p_amount:" << _amount
			  << ";withdrawal:";
	if (_amount - withdrawal >= 0) {
		_totalAmount -= withdrawal;
		_amount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << withdrawal
				  << ";amount:" << _amount
				  << ";nb_withdrawals:" << _nbWithdrawals <<std::endl;
		return true;
	}
	std::cout << "refused" << std::endl;
	return false;
}
