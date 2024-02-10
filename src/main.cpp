#define DOCTEST_CONFIG_IMPLEMENT
#include "../lib/doctest/doctest.h"
#include <iostream>
#include "utils.h"
#include "random"
#include <chrono>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    return 0;
    string str = "Simple string to reverse.";

    cout << "Original string: " << str << endl;
    cout << "Reversed string: " << utils::reverseString(str) << endl;
    cout << "Recursive reversed string: " << utils::recursiveReverseString(str, 0, str.length() - 1) << endl;

    cout << utils::recursiveDecimalToBinary(75) << endl;

    cout << utils::decimalToBinary(75) << endl;

    int arr[] = {64, 34, 25, 12, 22, 11, 90};

    int n = sizeof(arr) / sizeof(arr[0]);

    utils::selectionSort(arr, 7);

    return 0;

}

TEST_SUITE("MAIN") {
    TEST_CASE("mainTest") {
        CHECK(1 == 1);
    }
}
