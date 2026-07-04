#include "FingerprintAuthenticator.h"

#include <iostream>
#include <ostream>

namespace pin
{
    void FingerprintAuthenticator::authenticateAccount(domain::Account& account)
    {
        std::cout << "authenticating using fingerprint..." << std::endl;
    }
}
