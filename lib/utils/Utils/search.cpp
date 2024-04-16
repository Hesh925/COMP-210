//
// Created by Heshmati on 2/12/2024.
//

#include "../utils.h"
#include <iostream>
#include <vector>

using namespace std;

/**
 * @brief Binary search algorithm
 * @param arr Array of integers
 * @param target Integer to search for within the Array
 * @return int Index of the target integer within the Array
 * @example int result = Utils::binarySearch(arr, target);
 */

int utils::binarySearch(vector<int> arr, int target) {
    int high = static_cast<int>(arr.size() - 1);
    int mid = 0;
    int low = 0;

    // Loop through the Array
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
    }
    // If the target is not found
    return -1;
}

/**
 * @brief Recursive binary search algorithm
 * @param arr Array of integers
 * @param target Integer to search for within the Array
 * @param low zero
 * @param high length of the Array
 * @return int
 *
 * @example int result = Utils::recursiveBinarySearch(arr, target, arr.size() - 1, 0);
 */
int utils::recursiveBinarySearch(vector<int> arr, int target, int high, int low) {
    // Base case
    if (low == high) return -1;

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
 * @brief Binary search algorithm
 * @param arr Array of strings
 * @param target String to search for within the Array
 * @return int Index of the target integer within the Array
 * @example int result = Utils::binarySearch(arr, target);
 */

int utils::binarySearch(vector<string>& arr, string target) {
    int high = arr.size() - 1;
    int mid = 0;
    int low = 0;

    // Loop through the Array
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
    }
    // If the target is not found
    return -1;
}
