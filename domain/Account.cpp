#include "Account.h"
#include <iostream>
#include <utility>

namespace domain
{
    Account::Account(std::string name, std::string code, const int pin, const double balance) : name_(std::move(name)),
        code_(std::move(code)), pin_(pin), balance_(balance)
    {
    }

    std::string Account::getName() const
    {
        return this->name_;
    }

    std::string Account::getCode() const
    {
        return this->code_;
    }

    int Account::getPin() const
    {
        return this->pin_;
    }

    double Account::getBalance() const
    {
        return this->balance_;
    }

    void Account::addBalance(const double balance)
    {
        this->balance_ += balance;
    }

    void Account::subtractBalance(const double balance)
    {
        this->balance_ -= balance;
    }
}
