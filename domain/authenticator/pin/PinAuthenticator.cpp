#include "PinAuthenticator.h"

#include <format>
#include <iostream>

#include "exception/InvalidPinException.h"
#include "exception/WrongPinException.h"

namespace pin
{
    void PinAuthenticator::authenticateAccount(account::Account& account)
    {
        std::cout << "-- [pin authentication] --" << std::endl;
        std::cout << "enter your pin:" << std::endl;

        if (int pin; std::cin >> pin)
        {
            if (pin == account.getPin())
                std::cout << std::format("welcome back {} \n", account.getName());
            else
                throw exception::WrongPinException("wrong pin");
        }
        else
            throw exception::InvalidPinException("invalid pin");
    }
}
