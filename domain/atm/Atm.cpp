#include "Atm.h"

namespace atm
{
    Atm::Atm(std::vector<account::Account> accounts) : accounts_(std::move(accounts))
    {
    }

    void Atm::authenticateAccount(const authenticator::IAuthenticator& iAuthenticator, const std::string& cardNumber)
    {
    }
}
