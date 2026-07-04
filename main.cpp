#include <iostream>

#include "domain/Account.h"

int main()
{
    const domain::Account account = domain::Account("Jayce", "FINGERPRINT1", 4444, 150.50);

    std::cout << account << "\n";
}
