cmake_minimum_required(VERSION 3.18)

#set compiler
set(CMAKE_CXX_COMPILER "C:/cygwin64/bin/g++.exe")
#set(CMAKE_CXX_COMPILER "C:/cygwin64/bin/g++")
set(CMAKE_SYSTEM_NAME Linux)

set(CMAKE_SYSTEM_PROCESSOR arm)

# set the project name
project(testCI)

# add the executable
add_executable(testCI main.cpp)