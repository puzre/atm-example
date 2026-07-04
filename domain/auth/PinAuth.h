#pragma once
#include "IAuth.h"

namespace auth
{
    class PinAuth : public IAuth
    {
    public:
        void authenticateAccount(domain::Account& account) override;
    };
}
