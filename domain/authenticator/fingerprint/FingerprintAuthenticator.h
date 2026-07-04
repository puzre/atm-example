#pragma once

#include "../IAuthenticator.h"

namespace pin
{
    class FingerprintAuthenticator : public authenticator::IAuthenticator
    {
    public:
        void authenticateAccount(domain::Account& account) override;
    };
}
