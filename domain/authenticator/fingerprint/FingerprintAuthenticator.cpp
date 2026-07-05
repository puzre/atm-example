#include "FingerprintAuthenticator.h"

#include <format>
#include <iostream>
#include <ostream>

#include "exception/InvalidFingerprintException.h"
#include "exception/WrongFingerprintException.h"

namespace fingerprint
{
    void FingerprintAuthenticator::authenticateAccount(account::Account& account)
    {
        std::string fingerprint;

        std::cout << "-- [fingerprint authentication] --" << std::endl;
        std::cout << "enter your fingerprint:" << std::endl;
        std::getline(std::cin, fingerprint);

        if (fingerprint.empty())
            throw exception::InvalidFingerprintException("invalid fingerprint");

        if (fingerprint == account.getFingerprint())
            std::cout << std::format("welcome back {} \n", account.getName());
        else
            throw exception::WrongFingerprintException("wrong fingerprint");
    }
}
