//
// Created by Heshmati on 2/12/2024.
//

#include "../utils.h"
#include <iostream>
#include <vector>

using namespace std;

/**
 * @brief Fibonacci sequence generator
 * @param n Number of fibonacci numbers to generate
 * @return int Nth fibonacci number
 * @example cout << Utils::fibonacci(10);
 */
int utils::fibonacci(int n) {
    int a = 0;
    int b = 1;
    int c = 0;

    if (n == 0) {
        return 0;
    }

    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    return c;
}

/**
 * @brief Recursive fibonacci sequence generator
 * @param n Number of fibonacci numbers to generate
 * @return int Nth fibonacci number
 * @example cout << Utils::recursiveFibonacci(10);
 */
int utils::recursiveFibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    return recursiveFibonacci(n - 1) + recursiveFibonacci(n - 2);
}

/**
* @brief Power function
 * @param base Base number
 * @param exponent Exponent
 * @return int Result of base^exponent
 * @example cout << Utils::power(2, 3);
*/
double utils::power(int base, int exponent) {
    double out = 1;
    for (int i = 0; i < exponent; i++) {
        out *= base;
    }
    return out;
}

/**
* @brief Recursive Power function
 * @param base Base number
 * @param exponent Exponent
 * @return int Result of base^exponent
 * @example cout << Utils::power(2, 3);
*/
double utils::recursivePower(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    return base * recursivePower(base, exponent - 1);
}

/**
 * @brief Factorial function
 * @param base Number to find factorial of
 * @return int factorial of N
 */
int utils::factorial(int base) {
    int out = 1;
    for (base; base > 0; base--) {
        out *= base;
    }
    return out;
}

/**
 * @brief Recursive Factorial function
 * @param base Number to find factorial of
 * @return int factorial of N
 */
int utils::recursiveFactorial(int base) {
    if (base == 0) {
        return 1;
    }

    return base * recursiveFactorial(base - 1);
}

/**
 * @brief Reverse string function
 * @param str String to reverse
 * @return string Reversed string
 * @example cout << Utils::reverseString("Hello, World!"); // "!dlroW ,olleH"
 */
string utils::reverseString(string str) {
    for (int i = 0; i < str.length() / 2; i++) {
        char temp = str[i];
        str[i] = str[str.length() - i - 1];
        str[str.length() - i - 1] = temp;
    }
    return str;
}

/**
 * @brief Recursive reverse string function
 * @param str String to reverse
 * @param start Start index
 * @param end End index
 * @return string Reversed string
 * @example cout << Utils::recursiveReverseString("Hello, World!", 0, str.length() - 1);
 */
string utils::recursiveReverseString(string str, int start, int end) {
    if (start >= end) {
        return str;
    }

    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    return recursiveReverseString(str, start + 1, end - 1);
}

/**
 * @brief Decimal to binary converter
 * @param n Decimal number
 * @return int Binary number
 * @example cout << Utils::decimalToBinary(100);
 */
int utils::decimalToBinary(int n) {
    int out = 0;
    int i = 1;
    while (n > 0) {
        out += (n % 2) * i;
        n /= 2;
        i *= 10;
    }
    return out;
}

/**
 * @brief Recursive decimal to binary converter
 * @param n Decimal number
 * @return int Binary number
 * @example cout << Utils::recursiveDecimalToBinary(100);
 */
int utils::recursiveDecimalToBinary(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 2) + 10 * recursiveDecimalToBinary(n / 2);
}

/**
 * @brief Array length function
 * @param arr Array of integers
 * @return int Length of the Array
 */
int utils::arrayLen(int arr[]) {
    return (sizeof(arr) / sizeof(arr[0]));
}
