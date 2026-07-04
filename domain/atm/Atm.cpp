#include "Atm.h"

#include <algorithm>
#include <iostream>

#include "exception/AccountNotFoundException.h"

namespace atm
{
    Atm::Atm(std::vector<account::Account> accounts) : accounts_(std::move(accounts))
    {
    }

    void Atm::authenticateAccount(authenticator::IAuthenticator& iAuthenticator, const std::string& cardNumber)
    {
        account::Account account = this->searchAccountByCardNumber(cardNumber);
        iAuthenticator.authenticateAccount(account);
        this->signedAccount_ = account;
    }

    void Atm::showSignedAccount() const
    {
        if (this->signedAccount_.has_value())
            std::cout << this->signedAccount_.value() << std::endl;
        else
            std::cout << "there is no signed account" << std::endl;
    }

    account::Account Atm::searchAccountByCardNumber(const std::string& cardNumber)
    {
        const std::vector<account::Account>::iterator accountIterator = std::ranges::find_if(this->accounts_,
            [&cardNumber](const account::Account& acc)
            {
                return acc.getCardNumber() == cardNumber;
            });

        if (accountIterator != this->accounts_.end())
            return *accountIterator;
        throw exception::AccountNotFoundException("account not found");
    }
}
