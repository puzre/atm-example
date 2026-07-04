#pragma once
#include "IAuth.h"

namespace auth
{
    class FingerprintAuth : public IAuth
    {
    public:
        void authenticateAccount(domain::Account& account) override;
    };
}
