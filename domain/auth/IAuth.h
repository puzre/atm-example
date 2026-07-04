#pragma once
#include "../Account.h"

namespace auth
{
    class IAuth
    {
    public:
        virtual ~IAuth() = default;
        virtual void authenticateAccount(domain::Account& account) = 0;
    };
}
