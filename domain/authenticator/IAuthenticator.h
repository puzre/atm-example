#pragma once

#include "../account/Account.h"

namespace authenticator
{
    class IAuthenticator
    {
    public:
        virtual ~IAuthenticator() = default;
        virtual void authenticateAccount(domain::Account& account) = 0;
    };
}
