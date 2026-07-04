cmake_minimum_required(VERSION 4.2)
project(atm_example)

set(CMAKE_CXX_STANDARD 20)

add_executable(atm_example main.cpp
        domain/account/Account.cpp
        domain/account/Account.h
        domain/atm/Atm.cpp
        domain/atm/Atm.h
        domain/authenticator/IAuthenticator.h
        domain/authenticator/fingerprint/FingerprintAuthenticator.cpp
        domain/authenticator/fingerprint/FingerprintAuthenticator.h
        domain/authenticator/pin/PinAuthenticator.cpp
        domain/authenticator/pin/PinAuthenticator.h
)
