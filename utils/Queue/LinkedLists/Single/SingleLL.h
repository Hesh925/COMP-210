//
// Created by Heshmati on 4/8/2024.
// Circular Linked List Queue.h
//


#ifndef COMP_210_SINGLELL_H
#define COMP_210_SINGLELL_H


using namespace std;


class Iterator;
class CLLQueue;


class node {
private:
    node* next = nullptr;
    int data;
public:
    node(int data) {this->data = data; }
    friend class Iterator;
    friend class SingleLLQueue;
};


/**
* Singly Linked List Queue
*/
class SingleLLQueue {
private:
    node* head = nullptr;
    node* tail = nullptr;
public:
    SingleLLQueue() = default;
    void Enqueue(int data);
    int Dequeue();
    int peek();
    void print();
    bool isEmpty();
    int getLength();

    ~SingleLLQueue();

protected:
    Iterator begin();
    Iterator end();

    friend class Iterator;
};

class Iterator {
public:
    Iterator();
    int get() const;
    void next();
    void previous();
    bool equals(Iterator other) const;

    // Overloaded operators
    bool operator==(const Iterator &other) const;
    bool operator!=(const Iterator &other) const;
    Iterator& operator++();

private:
    node *position;
    SingleLLQueue *container;

    friend class SingleLLQueue;
};


#endif //COMP_210_SINGLELL_H