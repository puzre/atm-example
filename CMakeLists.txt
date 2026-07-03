cmake_minimum_required(VERSION 4.2)
project(atm_example)

set(CMAKE_CXX_STANDARD 20)

add_executable(atm_example main.cpp
        domain/Account.cpp
        domain/Account.h
)
