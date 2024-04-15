// main.cpp

#include <iostream>
#include "utils/Queue/LinkedLists/Single/llqueue.cpp"

using namespace std;

int main() {

}


void test_llQueue() {
    llQueue queue;
    queue.Enqueue(1);
    queue.Enqueue(2);
    queue.Enqueue(3);
    queue.Enqueue(4);
    queue.Enqueue(5);
    queue.Enqueue(6);
    queue.Enqueue(7);
    queue.Enqueue(8);
    queue.Enqueue(9);
    queue.Enqueue(10);
    queue.print();
    cout << "Length: " << queue.getLength() << endl;
    cout << "Peek: " << queue.peek() << endl;
    cout << "Dequeue: " << queue.Dequeue() << endl;
    cout << "Peek: " << queue.peek() << endl;
    cout << "Length: " << queue.getLength() << endl;
    queue.print();
    delete &queue;
}



