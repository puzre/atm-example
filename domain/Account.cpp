#include "Account.h"
#include <iostream>
#include <utility>

namespace domain
{
    Account::Account(std::string name, std::string fingerprint, const int pin, const double balance) :
        name_(std::move(name)),
        fingerprint_(std::move(fingerprint)), pin_(pin), balance_(balance)
    {
    }

    std::string Account::getName() const
    {
        return this->name_;
    }

    std::string Account::getFingerprint() const
    {
        return this->fingerprint_;
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

    std::ostream& operator<<(std::ostream& os, const Account& account)
    {
        os << "Account { name = " << account.getName() << ", fingerprint = " << account.getFingerprint() <<
            ", balance = " << account.getBalance() << " }";
        return os;
    }
}
