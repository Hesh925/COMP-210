//
// Created by Heshmati on 1/29/2024.
//

#include "../utils.h"
#include <iostream>
#include <vector>

using namespace std;

void InsertionSortInterleaved(int numbers[], int numbersSize, int startIndex, int gap) {
    int i = 0;
    int j = 0;
    int temp = 0;  // Temporary variable for swap

    for (i = startIndex + gap; i < numbersSize; i = i + gap) {
        j = i;
        while (j - gap >= startIndex && numbers[j] < numbers[j - gap]) {
            temp = numbers[j];
            numbers[j] = numbers[j - gap];
            numbers[j - gap] = temp;
            j = j - gap;
        }
    }
}

int runTests() {
    string str = "Simple string to reverse.";

    cout << "Original string: " << str << endl;
    cout << "Reversed string: " << utils::reverseString(str) << endl;
    cout << "Recursive reversed string: " << utils::recursiveReverseString(str, 0, str.length() - 1) << endl;

    cout << utils::recursiveDecimalToBinary(75) << endl;

    cout << utils::decimalToBinary(75) << endl;

    int arr[] = {64, 34, 25, 12, 22, 11, 90};

    int n = sizeof(arr) / sizeof(arr[0]);

    utils::selectionSort(arr, 7);

    int arr2_1[] = {60, 66, 49, 50, 51};
    int arr2_2[] = {60, 66, 49, 50, 51};
    int arr2_3[] = {60, 66, 49, 50, 51};

    InsertionSortInterleaved(arr2_1, 5, 0, 3);
    InsertionSortInterleaved(arr2_2, 5, 0, 2);
    InsertionSortInterleaved(arr2_3, 5, 0, 1);

    cout << "Sorted Array with gap 1: ";
    for (int i = 0; i < 5; i++) {
        cout << arr2_1[i] << " ";
    }
    cout << endl << "Sorted Array with gap 2: ";
    for (int i = 0; i < 5; i++) {
        cout << arr2_2[i] << " ";
    }
    cout << endl << "Sorted Array with gap 3: ";
    for (int i = 0; i < 5; i++) {
        cout << arr2_3[i] << " ";
    }

    int arr3[] = {64, 34, 25, 12, 22, 11, 90};

    utils::bubbleSort(arr3, 7);

    cout << endl << "Sorted Array: ";
    for (int i = 0; i < 7; i++) {
        cout << arr3[i] << " ";
    }
    cout << endl;

    return 0;

}

void utils::spellingsGenerator(int number, string &current, vector<string> &result) {
    const vector<string> keypad = {"", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};
    if (number == 0) {
        // Reverse the current string and add it to the result
        result.push_back(utils::reverseString(current));
        return;
    }

    // Get the last digit of the number
    int digit = number % 10;
    // Remove the last digit from the number
    number /= 10;

    // If the digit is invalid, skip it
    if (digit < 0 || digit > 9 || keypad[digit - 1] == "") {
        spellingsGenerator(number, current, result);
        return;
    }

    // Iterate through all letters corresponding to the current digit
    for (char letter: keypad[digit - 1]) {
        current.push_back(letter);
        spellingsGenerator(number, current, result);
        current.pop_back();
    }
}

// Starter function to make things look nicer in main
vector<string> utils::numberSpellings(const int &number) {
    vector<string> result;
    string current = "";
    spellingsGenerator(number, current, result);
    return result;
}
