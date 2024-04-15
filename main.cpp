// main.cpp

#include <iostream>
#include "utils/Queue/LinkedLists/Single/SingleLL.cpp"
#include "utils/Queue/Array/arrayQueue.cpp"
using namespace std;


void test_llQueue();
void test_arrayQueue();


int main() {
//    cout << "Linked List Queue" << endl;
//    test_llQueue();
    cout << endl << "Array Queue" << endl;
    test_arrayQueue();
    return 0;
}


void test_arrayQueue() {
    arrayQueue queue = arrayQueue(20);


    for(int i = 0; i < 20; i++) {
        queue.Enqueue(i+1);
    }


    queue.print();


    cout << "Length: " << queue.getLength() << endl;
    cout << "Peek: " << queue.peek() << endl;
    cout << "Dequeue: " << queue.Dequeue() << endl;
    cout << "Peek: " << queue.peek() << endl;
    cout << "Length: " << queue.getLength() << endl;
    queue.print();


    cout << "Dequeue: " << queue.Dequeue() << endl;
    cout << "Dequeue: " << queue.Dequeue() << endl;
    cout << "Dequeue: " << queue.Dequeue() << endl << endl;
    cout << "Enqueue: 1" << endl; queue.Enqueue(1);
    cout << "Enqueue: 2" << endl << endl; queue.Enqueue(2);


    queue.print();
}
