//
// Created by Heshmati on 2/12/2024.
//

#include "utils.h"
#include <iostream>
#include <vector>

using namespace std;

/**
 * @brief Print function
 * @param str String to print
 * @example utils::print("Hello, World!");
 */
void utils::print(string str) {
    cout << str << endl;
}

/**
 * @brief Print function
 * @param num Integer to print
 * @example utils::print(100);
 */
void utils::print(int num) {
    cout << num << endl;
}

/**
 * @brief Print function
 * @param num Double to print
 * @example utils::print(3.14);
 */
void utils::print(double num) {
    cout << num << endl;
}

/**
 * @brief Print function
 * @param num Boolean to print
 * @example utils::print(true);
 */
void utils::print(bool num) {
    cout << num << endl;
}

/**
 * @brief Print function
 * @param num Character to print
 * @example utils::print('H');
 */
void utils::print(char num) {
    cout << num << endl;
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