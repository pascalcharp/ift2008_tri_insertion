cmake_minimum_required(VERSION 3.14)
project(tri_insertion)

set(CMAKE_CXX_STANDARD 11)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)

FetchContent_MakeAvailable(googletest)

add_executable(tri_insertion main.cpp tri_insertion.cpp)

enable_testing()

add_subdirectory(tests)

