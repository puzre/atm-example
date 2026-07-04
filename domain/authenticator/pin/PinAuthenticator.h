#pragma once

#include "../IAuthenticator.h"

namespace pin
{
    class PinAuthenticator : public authenticator::IAuthenticator
    {
    public:
        void authenticateAccount(domain::Account& account) override;
    };
}
