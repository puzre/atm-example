#pragma once
#include <string>

namespace account
{
    class Account
    {
        std::string name_;
        std::string cardNumber_;
        std::string fingerprint_;
        int pin_;
        double balance_ = 0;

    public:
        Account(std::string name, std::string cardNumber, std::string fingerprint, int pin, double balance);
        [[nodiscard]] std::string getName() const;
        [[nodiscard]] std::string getCardNumber() const;
        [[nodiscard]] std::string getFingerprint() const;
        [[nodiscard]] int getPin() const;
        [[nodiscard]] double getBalance() const;
        void addBalance(double balance);
        void subtractBalance(double balance);
        friend std::ostream& operator<<(std::ostream& os, const Account& account);
    };
}
