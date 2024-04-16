//
// Created by Heshmati on 4/15/2024.
//
#pragma clang diagnostic ignored "-Woverloaded-shift-op-parentheses"

#include "../../../doctest.h"
#include "../../utils.h"
#include <iostream>
#include <vector>
#include <string>
#include <random>

string RecursiveReversStringHelper(string str) {
    return utils::recursiveReverseString(str, 0, str.length() - 1);
}

TEST_SUITE("UTILS_MISC") {
    TEST_CASE("Factorial" * doctest::timeout(0.2)) {
        SUBCASE("Non-Recursive Factorial") {
            SUBCASE("Factorial of 0") {
                CHECK(utils::factorial(0) == 1);
            }
            SUBCASE("Factorial of 1") {
                CHECK(utils::factorial(1) == 1);
            }
            SUBCASE("Factorial of 2") {
                CHECK(utils::factorial(2) == 2);
            }
            SUBCASE("Factorial of 3") {
                CHECK(utils::factorial(3) == 6);
            }
            SUBCASE("Factorial of 10") {
                CHECK(utils::factorial(10) == 3628800);
            }
        }
        SUBCASE("Recursive Factorial") {
            SUBCASE("Factorial of 0") {
                CHECK(utils::recursiveFactorial(0) == 1);
            }
            SUBCASE("Factorial of 1") {
                CHECK(utils::recursiveFactorial(1) == 1);
            }
            SUBCASE("Factorial of 2") {
                CHECK(utils::recursiveFactorial(2) == 2);
            }
            SUBCASE("Factorial of 3") {
                CHECK(utils::recursiveFactorial(3) == 6);
            }
            SUBCASE("Factorial of 10") {
                CHECK(utils::recursiveFactorial(10) == 3628800);
            }
        }
    }

    TEST_CASE("Fibonacci" * doctest::timeout(0.2)) {
        SUBCASE("Non-Recursive Fibonacci") {
            SUBCASE("Fibonacci of 1") {
                CHECK(utils::fibonacci(1) == 0);
            }
            SUBCASE("Fibonacci of 2") {
                CHECK(utils::fibonacci(2) == 1);
            }
            SUBCASE("Fibonacci of 3") {
                CHECK(utils::fibonacci(3) == 2);
            }
            SUBCASE("Fibonacci of 10") {
                CHECK(utils::fibonacci(10) == 55);
            }
            SUBCASE("Fibonacci of 20") {
                CHECK(utils::fibonacci(20) == 6765);
            }
        }
        SUBCASE("Recursive Fibonacci") {
            SUBCASE("Fibonacci of 0") {
                CHECK(utils::recursiveFibonacci(0) == 0);
            }
            SUBCASE("Fibonacci of 1") {
                CHECK(utils::recursiveFibonacci(1) == 1);
            }
            SUBCASE("Fibonacci of 2") {
                CHECK(utils::recursiveFibonacci(2) == 1);
            }
            SUBCASE("Fibonacci of 3") {
                CHECK(utils::recursiveFibonacci(3) == 2);
            }
            SUBCASE("Fibonacci of 10") {
                CHECK(utils::recursiveFibonacci(10) == 55);
            }
        }
    }

    TEST_CASE("Power" * doctest::timeout(0.2)) {
        SUBCASE("Non-Recursive Power") {
            SUBCASE("Power of 2^3") {
                CHECK(utils::power(2, 3) == 8);
            }
            SUBCASE("Power of 3^7") {
                CHECK(utils::power(3, 7) == 2187);
            }
            SUBCASE("Power of 4^6") {
                CHECK(utils::power(4, 6) == 4096);
            }
            SUBCASE("Power of 5^3") {
                CHECK(utils::power(5, 3) == 125);
            }
            SUBCASE("Power of 6^3") {
                CHECK(utils::power(6, 3) == 216);
            }
        }
        SUBCASE("Recursive Power") {
            SUBCASE("Power of 2^3") {
                CHECK(utils::recursivePower(2, 3) == 8);
            }
            SUBCASE("Power of 3^7") {
                CHECK(utils::recursivePower(3, 7) == 2187);
            }
            SUBCASE("Power of 4^6") {
                CHECK(utils::recursivePower(4, 6) == 4096);
            }
            SUBCASE("Power of 5^3") {
                CHECK(utils::recursivePower(5, 3) == 125);
            }
            SUBCASE("Power of 6^3") {
                CHECK(utils::recursivePower(6, 3) == 216);
            }
        }
    }
    TEST_CASE("Reverse String") {
        SUBCASE("Non-Recursive Reverse String") {
            SUBCASE("Reverse of 'Hello'") {
                CHECK(utils::reverseString("Hello") == "olleH");
            }
            SUBCASE("Reverse of 'World'") {
                CHECK(utils::reverseString("World") == "dlroW");
            }
            SUBCASE("Reverse of 'C++'") {
                CHECK(utils::reverseString("C++") == "++C");
            }
            SUBCASE("Reverse of 'Python'") {
                CHECK(utils::reverseString("Python") == "nohtyP");
            }
            SUBCASE("Reverse of 'Java'") {
                CHECK(utils::reverseString("Java") == "avaJ");
            }
        }
        SUBCASE("Recursive Reverse String") {
            SUBCASE("Reverse of 'Hello'") {
                CHECK(RecursiveReversStringHelper("Hello") == "olleH");
            }
            SUBCASE("Reverse of 'World'") {
                CHECK(RecursiveReversStringHelper("World") == "dlroW");
            }
            SUBCASE("Reverse of 'C++'") {
                CHECK(RecursiveReversStringHelper("C++") == "++C");
            }
            SUBCASE("Reverse of 'Python'") {
                CHECK(RecursiveReversStringHelper("Python") == "nohtyP");
            }
            SUBCASE("Reverse of 'Java'") {
                CHECK(RecursiveReversStringHelper("Java") == "avaJ");
            }
        }
    }

    TEST_CASE("Decimal To Binary") { // returns int representation of binary number
        SUBCASE("Non-Recursive Decimal To Binary") {
            CHECK(utils::decimalToBinary(1) == 1);
            CHECK(utils::decimalToBinary(2) == 10);
            CHECK(utils::decimalToBinary(-1) );

        }
        SUBCASE("Recursive Decimal To Binary") {

        }
    }
}
