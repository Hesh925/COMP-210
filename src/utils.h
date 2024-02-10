//
// Created by Heshmati on 1/29/2024.
//

#ifndef COMP_210_UTILS_H
#define COMP_210_UTILS_H

#include <string>
#include "vector"
using namespace std;

class utils {
public:

    // Binary search
    static int binarySearch(vector<int>, int target);
    static int recursiveBinarySearch(vector<int> arr, int target, int high, int low);

    // Fibonacci
    static int fibonacci(int n);
    static int recursiveFibonacci(int n);

    // Power
    static double power(int base, int exponent);
    static double recursivePower(int base, int exponent);

    // Factorial
    static int factorial(int base);
    static int recursiveFactorial(int base);

    // Reverse string
    static string reverseString(string str);
    static string recursiveReverseString(string str, int start, int end);

    // decimal to binary
    static int decimalToBinary(int n);
    static int recursiveDecimalToBinary(int n);

    static void selectionSort(int arr[], int n);

    // Print array
    static void printArray(int arr[], int size);

    // Print vector
    static void printVector(vector<int> vector);
    static void printVector(vector<string> vector);
    static void printVector(vector<double> vector);
    static void printVector(vector<bool> vector);
    static void printVector(vector<char> vector);



    // Test function
    // KEEP AT EOF
    static void test();
};


#endif //COMP_210_UTILS_H
