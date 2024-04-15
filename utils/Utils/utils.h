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

    // Search
    static int binarySearch(vector<int>, int target);

    static int recursiveBinarySearch(vector<int> arr, int target, int high, int low);

    static int binarySearch(vector<string> &arr, string target);

    // Sorting
    static void selectionSort(int arr[], int n);

    static void bubbleSort(int arr[], int n);

    static void insertionSort(int arr[], int n);

    static void insertionSort(vector<string> &arr);

    // Misc
    static int fibonacci(int n); // Tests Written
    static int recursiveFibonacci(int n); // Tests Written
    static double power(int base, int exponent); // Tests Written
    static double recursivePower(int base, int exponent); // Tests Written
    static int factorial(int base); // Tests Written
    static int recursiveFactorial(int base); // Tests Written
    static string reverseString(string str);

    static string recursiveReverseString(string str, int start, int end);

    static int decimalToBinary(int n);

    static int recursiveDecimalToBinary(int n);

    static int arrayLen(int arr[]);

    // Printing
    static void print(string str);

    static void print(int num);

    static void print(double num);

    static void print(bool num);

    static void print(char num);

    static void printArray(int arr[], int size);

    static void printVector(vector<int> vector);

    static void printVector(vector <string> vector);

    static void printVector(vector<double> vector);

    static void printVector(vector<bool> vector);

    static void printVector(vector<char> vector);

    vector<string> numberSpellings(const int &number);

    void spellingsGenerator(int number, string &current, vector<string> &result);
};


#endif //COMP_210_UTILS_H
