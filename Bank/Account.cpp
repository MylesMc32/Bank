//
//  Account.cpp
//  Bank


#include <stdio.h>
#include "Account.h"



#include <iostream>
using namespace std;

int pennies;

Account::Account(Customer customer, int accountNumber) : _accountOwner(customer), _accountNumber(accountNumber)
{
}

Account::~Account()
{
}

void Account::Deposit(int numberOfPennies)
{
    _balanceInPennies += numberOfPennies;
    std::string add_message = "You have deposited: " + std::to_string(numberOfPennies) + "pennies into your account";
    Account::_log.push_back(add_message);
  //TODO: Add a message to the log
}

void Account::Withdraw(int numberOfPennies)
{
    _balanceInPennies -= numberOfPennies;
    std::string add_message = "You have withdrawn: " + std::to_string(numberOfPennies) + "pennies out from your account";
    Account::_log.push_back(add_message);
    //TODO: Add a message to the log
}

int Account::getBalance()
{
    return 0;
}

int Account::getAccountNumber()
{
    return _accountNumber;
}

std::string Account::getFullName()
{
    return _accountOwner.getFullName();
}



