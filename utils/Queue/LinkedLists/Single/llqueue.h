//
// Created by Heshmati on 4/8/2024.
// Circular Linked List Queue
//

#ifndef COMP_210_LLQUEUE_H
#define COMP_210_LLQUEUE_H

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
    friend class llQueue;
};

class llQueue {
private:
    node* head = nullptr;
    node* tail = nullptr;
public:
    void Enqueue(int data);
    int Dequeue();
    int peek();
    void print();

    bool isEmpty();
    int getLength();

protected:
    Iterator begin();
    Iterator end();

    friend class Iterator;
};

class Iterator {
public:
    /**
       Constructs an iterator that does not point into any list.
    */
    Iterator();

    /**
       Looks up the value at a position.
       @return the value of the node to which the iterator points
    */
    int get() const;

    /**
       Advances the iterator to the next node.
    */
    void next();

    /**
       Moves the iterator to the previous node.
    */
    void previous();

    /**
       Compares two iterators.
       @param other the iterator to compare with this iterator
       @return true if this iterator and other are equal
    */
    bool equals(Iterator other) const;

    // Overloaded operators
    bool operator==(const Iterator &other) const;
    bool operator!=(const Iterator &other) const;
    Iterator& operator++();
    Iterator& operator--();

private:
    node *position;
    llQueue *container;

    friend class llQueue;
};

#endif //COMP_210_LLQUEUE_H
