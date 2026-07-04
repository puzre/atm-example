#pragma once
#include <optional>
#include <vector>

#include "Account.h"
#include "authenticator/IAuthenticator.h"

namespace domain
{
    class Atm
    {
        std::vector<Account> accounts_;
        std::optional<Account> signedAccount_;

    public:
        explicit Atm(std::vector<Account> accounts);
        void authenticateAccount(const authenticator::IAuthenticator& iAuthenticator, const std::string& cardNumber);
    };
}
