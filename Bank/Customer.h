//
//  Customer.h
//  Bank
//

#ifndef Customer_h
#define Customer_h

#pragma once

#include <string>

class Customer
{
private:
    std::string _firstName;
    std::string _lastName;
public:
    Customer(std::string firstName, std::string lastName);
    ~Customer();
    
    std::string getFullName();
    std::string getFirstName();
    std::string getLastName();
};
#endif /* Customer_h */
