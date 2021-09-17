cmake_minimum_required(VERSION 3.19)
project(Inheritance)

set(CMAKE_CXX_STANDARD 14)

add_executable(Inheritance main.cpp Account.cpp Account.h SavingsAccount.cpp SavingsAccount.h AccountUtil.cpp AccountUtil.h CheckingAccount.cpp CheckingAccount.h TrustAccount.cpp TrustAccount.h)