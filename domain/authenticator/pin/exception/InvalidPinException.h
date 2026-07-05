#pragma once
#include <stdexcept>

namespace exception
{
    class InvalidPinException : public std::runtime_error
    {
    public:
        explicit InvalidPinException(const std::string& message)
            : std::runtime_error(message)
        {
        }
    };
}
