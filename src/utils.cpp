//
// Created by Heshmati on 1/29/2024.
//

#include "utils.h"
#include <iostream>
#include <vector>

using namespace std;

/**
 * @brief Binary search algorithm
 * @param arr Array of integers
 * @param target Integer to search for within the array
 * @return int Index of the target integer within the array
 * @example int result = utils::binarySearch(arr, target);
 */
int utils::binarySearch(vector<int> arr, int target) {
    int high = static_cast<int>(arr.size() - 1);
    int mid = 0;
    int low = 0;

    // Loop through the array
    while (low <= high) {
        // Find the middle index
        mid = (low + high) / 2;
        // If the middle element is the target
        if (arr[mid] == target) {
            return mid;
        // If the middle element is less than the target
        } else if (arr[mid] < target) {
            low = mid + 1;
        // If the middle element is greater than the target
        } else { // if (arr[mid] > target)
            high = mid - 1;
        }

//        cout << "Subarray: { ";
//        for(int i = low; i <= high; i++) {
//            if(i != low) cout << ", ";
//            cout << arr[i];
//        }
//        cout << " }" << endl;
    }
    // If the target is not found
    return -1;
}

/**
 * @brief Recursive binary search algorithm
 * @param arr Array of integers
 * @param target Integer to search for within the array
 * @param low zero
 * @param high length of the array
 * @return int
 *
 * @example int result = utils::recursiveBinarySearch(arr, target, arr.size() - 1, 0);
 */
int utils::recursiveBinarySearch(vector<int> arr, int target, int high, int low) {
    // Base case
    if (low == high) return -1;

    // Cout the subarray
//    cout << "Subarray: { ";
//    for(int i = low; i <= high; i++) {
//        if(i != low) cout << ", ";
//        cout << arr[i];
//    }
//    cout << " }" << endl;

    // Find the middle index
    int mid = (low + high) / 2;

    // If the middle element is the target
    if (arr[mid] == target) return mid;

    // If the middle element is less than the target
    else if (arr[mid] < target) return recursiveBinarySearch(arr, target, high, mid + 1);

    // If the middle element is greater than the target
    else return recursiveBinarySearch(arr, target, mid - 1, low);
}

/**
 * @brief Fibonacci sequence generator
 * @param n Number of fibonacci numbers to generate
 * @return int Nth fibonacci number
 * @example cout << utils::fibonacci(10);
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
 * @example cout << utils::recursiveFibonacci(10);
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
 * @example cout << utils::power(2, 3);
*/
double utils::power(int base, int exponent) {
    double out = 1;
    for(int i = 0; i < exponent; i++) {
        out *= base;
    }
    return out;
}

/**
* @brief Recursive Power function
 * @param base Base number
 * @param exponent Exponent
 * @return int Result of base^exponent
 * @example cout << utils::power(2, 3);
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
    for(base; base > 0; base--) {
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
    if(base == 0) {
        return 1;
    }

    return base * recursiveFactorial(base-1);
}

/**
 * @brief Reverse string function
 * @param str String to reverse
 * @return string Reversed string
 * @example cout << utils::reverseString("Hello, World!");
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
 * @example cout << utils::recursiveReverseString("Hello, World!", 0, str.length() - 1);
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
 * @example cout << utils::decimalToBinary(100);
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
 * @example cout << utils::recursiveDecimalToBinary(100);
 */
int utils::recursiveDecimalToBinary(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 2) + 10 * recursiveDecimalToBinary(n / 2);
}

/**
 * @brief Bubble sort algorithm
 * @param arr Array of integers
 * @param n Length of the array
 * @example int arr[] = {64, 34, 25, 12, 22, 11, 90};
 * utils::bubbleSort(arr, 7);
 */
void utils::selectionSort(int arr[], int n) {
    int i, j, min_index;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n - 1; i++) {

        // Find the minimum element in unsorted array
        min_index = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index])
                min_index = j;
        }
        printArray(arr, n);

        // Swap the found minimum element with the first element
        if (min_index != i)
            swap(arr[min_index], arr[i]);
    }
}

/**
 * @brief Print array
 * @param arr Array of integers
 * @param size Length of the array
 * @example int arr[] = {64, 34, 25, 12, 22, 11, 90};
 * utils::printArray(arr, 7);
 */
void utils::printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        if (i != 0) cout << ", ";
        cout << arr[i];
    }
    cout << endl;
}

/**
 * @brief Print vector
 * @param vector Vector of integers
 * @example vector<int> vector = {64, 34, 25, 12, 22, 11, 90};
 * utils::printVector(vector);
 */
void utils::printVector(vector<int> vector) {
    for (int i = 0; i < vector.size(); i++) {
        if (i != 0) cout << ", ";
        cout << vector[i];
    }
    cout << endl;
}

/**
 * @brief Print vector
 * @param vector Vector of strings
 * @example vector<string> vector = {"Hello", "World", "!"};
 * utils::printVector(vector);
 */
void utils::printVector(vector<string> vector) {
    for (int i = 0; i < vector.size(); i++) {
        if (i != 0) cout << ", ";
        cout << vector[i];
    }
    cout << endl;
}

/**
 * @brief Print vector
 * @param vector Vector of doubles
 * @example vector<double> vector = {3.14, 2.71, 1.61};
 * utils::printVector(vector);
 */
void utils::printVector(vector<double> vector) {
    for (int i = 0; i < vector.size(); i++) {
        if (i != 0) cout << ", ";
        cout << vector[i];
    }
    cout << endl;
}

/**
 * @brief Print vector
 * @param vector Vector of booleans
 * @example vector<bool> vector = {true, false, true};
 * utils::printVector(vector);
 */
void utils::printVector(vector<bool> vector) {
    for (int i = 0; i < vector.size(); i++) {
        if (i != 0) cout << ", ";
        cout << vector[i];
    }
    cout << endl;
}

/**
 * @brief Print vector
 * @param vector Vector of characters
 * @example vector<char> vector = {'H', 'e', 'l', 'l', 'o'};
 * utils::printVector(vector);
 */
void utils::printVector(vector<char> vector) {
    for (int i = 0; i < vector.size(); i++) {
        if (i != 0) cout << ", ";
        cout << vector[i];
    }
    cout << endl;
}


#ifdef ENABLE_DOCTEST_IN_MAIN
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "lib/doctest.h"
    TEST_SUITE("MAIN") {
        TEST_CASE("mainTest") {
            CHECK(1 == 1);
        }
}
#endif

