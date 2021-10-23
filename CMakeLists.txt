cmake_minimum_required(VERSION 3.16)
project(HT1)

set(CMAKE_CXX_STANDARD 20)

add_executable(HT1 main.cpp Person.cpp Person.h "PhoneNumber.cpp" "PhoneNumber.h" PhoneBook.cpp PhoneBook.h)