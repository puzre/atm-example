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

        account::Account searchAccountByCardNumber(const std::string& cardNumber);

    public:
        explicit Atm(std::vector<account::Account> accounts);
        void authenticateAccount(authenticator::IAuthenticator& iAuthenticator, const std::string& cardNumber);
        void showSignedAccount() const;
    };
}
