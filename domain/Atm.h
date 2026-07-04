#pragma once
#include <optional>
#include <vector>

#include "Account.h"
#include "auth/IAuth.h"

namespace domain
{
    class Atm
    {
        std::vector<Account> accounts_;
        std::optional<Account> signedAccount_;

    public:
        explicit Atm(std::vector<Account> accounts);
        void addAccount(const Account& account);
        void authenticateAccount(const auth::IAuth& authenticator, const Account& account);
    };
}
