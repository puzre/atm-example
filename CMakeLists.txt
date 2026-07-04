cmake_minimum_required(VERSION 4.2)
project(atm_example)

set(CMAKE_CXX_STANDARD 20)

add_executable(atm_example main.cpp
        domain/Account.cpp
        domain/Account.h
        domain/Atm.cpp
        domain/Atm.h
        domain/authenticator/IAuthenticator.h
        domain/authenticator/FingerprintAuth.cpp
        domain/authenticator/FingerprintAuth.h
        domain/authenticator/PinAuth.cpp
        domain/authenticator/PinAuth.h
)
