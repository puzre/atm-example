#pragma once
#include <optional>
#include <vector>

#include "../account/Account.h"
#include "../authenticator/IAuthenticator.h"

namespace atm
{
    class Atm
    {
        std::vector<account::Account> accounts_;
        std::optional<account::Account> signedAccount_;

    public:
        explicit Atm(std::vector<account::Account> accounts);
        void authenticateAccount(const authenticator::IAuthenticator& iAuthenticator, const std::string& cardNumber);
    };
}
