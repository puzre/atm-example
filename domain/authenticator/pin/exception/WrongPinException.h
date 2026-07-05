#pragma once
#include <stdexcept>

namespace exception
{
    class WrongPinException : public std::runtime_error
    {
    public:
        explicit WrongPinException(const std::string& message) : runtime_error(message)
        {
        }
    };
}
