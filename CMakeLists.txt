cmake_minimum_required(VERSION 3.10)  # Minimum version of CMake

# Set the project name and version
project(COMP_210 VERSION 1.0)

OPTION(TESTING_GOOGLE "Use Google Test for testing." ON)
OPTION(TESTING_DOCTEST "Use Doctest for testing." OFF)

# Specify C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(LIB_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/lib)


# Add the directory where the source files are located
add_subdirectory(src)

# Add the tests subdirectory, which contains your test files
if(TESTING_GOOGLE)
    add_subdirectory(unit_tests/google_tests)
endif()