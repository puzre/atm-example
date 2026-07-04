#include "Account.h"
#include <iostream>
#include <utility>

namespace account
{
    Account::Account(std::string name, std::string cardNumber, std::string fingerprint, const int pin,
                     const double balance) :
        name_(std::move(name)),
        cardNumber_(std::move(cardNumber)),
        fingerprint_(std::move(fingerprint)), pin_(pin), balance_(balance)
    {
    }

    std::string Account::getName() const
    {
        return this->name_;
    }

    std::string Account::getCardNumber() const
    {
        return this->cardNumber_;
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
        os << "Account { name = " << account.getName() << ", cardNumber = " << account.getCardNumber() <<
            ", fingerprint = " << account.getFingerprint() <<
            ", balance = " << account.getBalance() << " }";
        return os;
    }
}
