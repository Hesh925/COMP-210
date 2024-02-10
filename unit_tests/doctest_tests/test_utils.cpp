//
// Created by Heshmati on 2/9/2024.
//
#include "../../lib/doctest/doctest.h"
#include "../../src/utils.h"
#include <iostream>
#include <vector>
#include <string>
#include <random>

using namespace std;

TEST_SUITE("UTILS") {
    TEST_CASE("Factorial") {
        CHECK(utils::factorial(1) == 1);
        CHECK(utils::factorial(2) == 2);
        CHECK(utils::factorial(3) == 6);
        CHECK(utils::factorial(10) == 3628800);
    }

    TEST_CASE("Recursive Factorial") {
        CHECK(utils::recursiveFactorial(1) == 1);
        CHECK(utils::recursiveFactorial(2) == 2);
        CHECK(utils::recursiveFactorial(3) == 6);
        CHECK(utils::recursiveFactorial(10) == 3628800);
    }

    TEST_CASE("Fibonacci") {
        CHECK(utils::fibonacci(1) == 1);
        CHECK(utils::fibonacci(2) == 1);
        CHECK(utils::fibonacci(3) == 2);
        CHECK(utils::fibonacci(10) == 55);
    }

    TEST_CASE("Recursive Fibonacci") {
        CHECK(utils::recursiveFibonacci(1) == 1);
        CHECK(utils::recursiveFibonacci(2) == 1);
        CHECK(utils::recursiveFibonacci(3) == 2);
        CHECK(utils::recursiveFibonacci(10) == 55);
    }

    TEST_CASE("Power") {
        CHECK(utils::power(2, 3) == 8);
        CHECK(utils::power(3, 3) == 27);
        CHECK(utils::power(4, 3) == 64);
        CHECK(utils::power(5, 3) == 125);
    }

    TEST_CASE("Recursive Power") {
        CHECK(utils::recursivePower(2, 3) == 8);
        CHECK(utils::recursivePower(3, 3) == 27);
        CHECK(utils::recursivePower(4, 3) == 64);
        CHECK(utils::recursivePower(5, 3) == 125);
    }
}
