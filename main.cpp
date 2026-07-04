#include <vector>

#include "domain/account/Account.h"
#include "domain/atm/Atm.h"
#include "domain/authenticator/fingerprint/FingerprintAuthenticator.h"

int main()
{
    const account::Account mainAccount = account::Account("José", "4444", "1111", 1111, 200.50);
    const account::Account firstAccount = account::Account("Alicia", "7777", "2222", 2222, 200.50);
    const account::Account secondAccount = account::Account("Sol", "9999", "3333", 3333, 200.50);

    std::vector atmAccounts = {mainAccount, firstAccount, secondAccount};

    atm::Atm atm = atm::Atm(atmAccounts);

    fingerprint::FingerprintAuthenticator fingerprintAuthenticator = fingerprint::FingerprintAuthenticator();

    atm.authenticateAccount(fingerprintAuthenticator, "4444");
}
