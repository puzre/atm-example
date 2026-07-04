#include "PinAuth.h"

#include <iostream>

namespace auth
{
    void PinAuth::authenticateAccount(domain::Account& account)
    {
        std::cout << "authenticating using pin..." << std::endl;
    }
}
