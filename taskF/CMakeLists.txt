cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(yandex-contest-17728-ozon-go)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_definitions(-O2 -fno-stack-limit -x c++ -std=c++11)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/build")
add_executable(solution solution.cpp)
