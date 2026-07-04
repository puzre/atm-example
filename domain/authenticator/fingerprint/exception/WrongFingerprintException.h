#pragma once
#include <stdexcept>
#include <string>

namespace exception
{
    class WrongFingerprintException : public std::runtime_error
    {
    public:
        explicit WrongFingerprintException(const std::string& message)
            : std::runtime_error(message)
        {
        }
    };
}
