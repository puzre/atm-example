#include "FingerprintAuth.h"

#include <iostream>
#include <ostream>

namespace auth
{
    void FingerprintAuth::authenticateAccount(domain::Account& account)
    {
        std::cout << "authenticating using fingerprint..." << std::endl;
    }
}
