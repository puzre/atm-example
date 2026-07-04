#pragma once
#include <stdexcept>

namespace exception
{
    class InvalidFingerprintException : public std::runtime_error
    {
    public:
        explicit InvalidFingerprintException(const std::string& message) : std::runtime_error(message)
        {
        }
    };
}
