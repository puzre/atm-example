#pragma once

#include "../IAuthenticator.h"

namespace fingerprint
{
    class FingerprintAuthenticator : public authenticator::IAuthenticator
    {
    public:
        void authenticateAccount(account::Account& account) override;
    };
}
