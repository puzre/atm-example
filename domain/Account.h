#pragma once
#include <string>

namespace domain
{
    class Account
    {
        std::string name;
        std::string code;
        double balance = 0;
        int pin;

    public:
        Account(std::string& name, std::string& code, int pin, double balance);
        [[nodiscard]] std::string getName() const;
        [[nodiscard]] std::string getCode() const;
        [[nodiscard]] int getPin() const;
        [[nodiscard]] double getBalance() const;
        void addBalance(double balance);
        void subtractBalance(double balance);
    };
}
