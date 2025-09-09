#include "Account.hpp"
#include <iostream>

// shared Data
// 	static int	_nbAccounts;
// 	static int	_totalAmount;
// 	static int	_totalNbDeposits;
// 	static int	_totalNbWithdrawals;

// personal data
// int				_accountIndex;
// 	int				_amount;
// 	int				_nbDeposits;
// 	int				_nbWithdrawals;






// personal infos
// bool makeWithdrawal(int withdrawal);
// int checkAmount(void) const;
// void displayStatus(void) const;

bool Account :: makeWithdrawal(int withdrawal)
{
    
}
void Account :: makeDeposit(int deposit)
{
    _amount  += deposit;
    _nbDeposits += 1;
}
int Account::getNbAccounts()
{
    return (Account ::_nbAccounts);
}

int Account ::getTotalAmount()
{
    return (Account ::_totalAmount);
}

int Account ::getNbDeposits()
{
    return (Account ::_totalNbDeposits);
}
int Account ::getNbWithdrawals()
{
    return (Account ::_totalNbWithdrawals);
}
Account ::Account(int initial_deposit)
{
    this->_amount = initial_deposit;
}
Account ::~Account(void)
{
    std ::cout << "Deleting ACC :)" << std ::endl;
}