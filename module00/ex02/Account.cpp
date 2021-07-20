#include "Account.hpp"
#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;


Account::Account(void) : _accountIndex(0), _amount(0) , _nbDeposits(0), _nbWithdrawals(0) {
	_accountIndex = _nbAccounts;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount <<
	";created" << std::endl;
	++_nbAccounts;
	_totalAmount +=_amount;
	return;
}

Account::Account(int initial_deposit) : _accountIndex(0),_nbDeposits(0), _nbWithdrawals(0) {
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount <<
	";created" << std::endl;
	++_nbAccounts;
	_totalAmount +=_amount;
	return;
}

Account::~Account(void) {
	--_nbAccounts;
	_totalAmount -=_amount;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount <<
	";closed" << std::endl;
	return;
}


int	Account::getNbAccounts(void) {
	return _nbAccounts;
}
int Account::getTotalAmount(void) {
	return _totalAmount;
}
int Account::getNbDeposits(void) {
	return _totalNbDeposits;
}
int Account::getNbWithdrawals(void) {
	return _totalNbWithdrawals;
}

int Account::checkAmount( void ) const {
	return this->_amount;
}


void Account::_displayTimestamp(void) {
	std::time_t t = std::time(0);
	std::tm* now = std::localtime(&t);
	std::cout << "[" << (now->tm_year + 1900) << (now->tm_mon + 1) <<  now->tm_mday << "_" <<
	now->tm_hour << now->tm_min << now->tm_sec << "] ";
}

void Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" <<
	_totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::displayStatus(void) const {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" <<
	this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}


void Account::makeDeposit(int deposit) {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit;
	_amount += deposit;
	_totalAmount += deposit;
	++this->_nbDeposits;
	++_totalNbDeposits;
	std::cout << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	if (_amount >= withdrawal) {
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:" << withdrawal;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		++this->_nbWithdrawals;
		++_totalNbWithdrawals;
		std::cout << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return true;
	} else {
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount <<
		";withdrawal:refused" << std::endl;
		return false;
	}
}
