//
//  Account.h
//  Bank
//


#ifndef Account_h
#define Account_h
#pragma once
#include <string>
#include "Customer.h"
#include <vector>

class Account
{
private:
    int _accountNumber;
    int _balanceInPennies = 0;
    Customer _accountOwner;
    std::vector<std::string> _log;
public:
    Account(Customer customer, int accountNumber);
    ~Account();
    
    void Deposit(int numberOfPennies);
    void Withdraw(int numberOfPennies);
    int getBalance();
    int getAccountNumber();
    std::string getFullName();
    std::string getLastName();
};


#endif /* Account_h */
