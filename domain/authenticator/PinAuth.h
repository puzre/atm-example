#pragma once

#include "IAuthenticator.h"

namespace authenticator
{
    class PinAuth : public IAuthenticator
    {
    public:
        void authenticateAccount(domain::Account& account) override;
    };
}
