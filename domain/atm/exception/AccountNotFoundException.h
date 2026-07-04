#pragma once
#include <stdexcept>

namespace exception
{
    class AccountNotFoundException : public std::runtime_error
    {
    public:
        explicit AccountNotFoundException(const std::string& message)
            : std::runtime_error(message)
        {
        }
    };
}
