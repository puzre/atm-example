#pragma once

#include "IAuthenticator.h"

namespace authenticator
{
    class FingerprintAuth : public IAuthenticator
    {
    public:
        void authenticateAccount(domain::Account& account) override;
    };
}
