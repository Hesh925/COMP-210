//
// Created by Heshmati on 2/12/2024.
//

#include "../utils.h"
#include <iostream>
#include <vector>

using namespace std;

/**
 * @brief Bubble sort algorithm
 * @param arr Array of integers
 * @param n Length of the Array
 * @example int arr[] = {64, 34, 25, 12, 22, 11, 90};
 * Utils::bubbleSort(arr, 7);
 */
void utils::selectionSort(int arr[], int n) {
    int i, j, min_index;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n - 1; i++) {

        // Find the minimum element in unsorted Array
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
 * @brief Bubble sort algorithm
 * @param numbers Array of integers
 * @param numbersSize Length of the Array
 * @example int numbers[] = {64, 34, 25, 12, 22, 11, 90};
 * Utils::BubbleSort(numbers, 7);
 */
void utils::bubbleSort(int numbers[], int numbersSize) {
    int temp = 0;
    for (int i = 0; i < numbersSize; ++i) {
        for (int j = 0; j < numbersSize - 1; ++j) {
            if (numbers[j] > numbers[j + 1]) {
                temp = numbers[j + 1];
                numbers[j + 1] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
}

/**
 * @brief Insertion sort algorithm
 * @param arr Array of integers
 * @param n Length of the Array
 * @example int arr[] = {64, 34, 25, 12, 22, 11, 90};
 * Utils::insertionSort(arr, 7);
 */
void utils::insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
        printArray(arr, n);
    }
}

/**
 * @brief Insertion sort algorithm
 * @param arr Array of strings
 * @example vector<string> arr = {"Hello", "World", "This", "Is", "A", "Test"};
 * Utils::insertionSort(arr);
 */
void utils::insertionSort(vector<string> &arr) {
    int i, j;
    string key;
    for (i = 1; i < arr.size(); i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
