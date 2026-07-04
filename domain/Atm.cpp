#include "Atm.h"

namespace domain
{
    Atm::Atm(std::vector<Account> accounts) : accounts_(std::move(accounts))
    {
    }

    void Atm::addAccount(const Account& account)
    {
    }

    void Atm::authenticateAccount(const auth::IAuth& authenticator, const Account& account)
    {
    }
}
