#include "Atm.h"

namespace domain
{
    Atm::Atm(std::vector<Account> accounts) : accounts_(std::move(accounts))
    {
    }

    void Atm::authenticateAccount(const authenticator::IAuthenticator& iAuthenticator, const std::string& cardNumber)
    {
    }
}
