// main.cpp

#include <iostream>
#include <vector>
#include <string>
#include "utils/CircularList/CircularList.h"

using namespace std;

#include "NumberList.h"

int main() {
    NumberList List;

    List.appendNode(1.5);
    List.appendNode(2.5);
    List.appendNode(3.5);
    List.appendNode(4.5);
    List.appendNode(5.5);
    List.appendNode(6.5);
    List.appendNode(7.5);
    List.appendNode(8.5);
    List.appendNode(9.5);
    List.appendNode(10.5);
    List.displayList();

    cout << "Search for 1.5  : "<< List.search(1.5) << endl;
    cout << "Search for 3.5  : "<< List.search(3.5) << endl;
    cout << "Search for 10.5 : "<< List.search(10.5) << endl;
    cout << "Search for 10.6 : "<< List.search(10.6) << endl;
    cout << "Search for -10.5: "<< List.search(-10.5) << endl;

    return 0;
}

