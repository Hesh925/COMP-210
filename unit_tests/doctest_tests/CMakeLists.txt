enable_testing()

include(${LIB_INCLUDE_DIR}/doctest/doctest.cmake)

# Find the doctest package, if it's not a header-only library in /lib
# find_package(doctest REQUIRED)

# Add an executable for the tests
add_executable(MyTests test_utils.cpp)

# Link the test executable against doctest
# If doctest was found using find_package, replace DOCTEST_INCLUDE_DIR with doctest::doctest
target_include_directories(MyTests PRIVATE ${LIB_INCLUDE_DIR}/doctest)

# Link the test executable with the source files or libraries it tests
target_link_libraries(MyTests PRIVATE MyApp)

# Add the tests to CTest
add_test(NAME MyTest COMMAND MyTests)