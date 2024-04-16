//
// Created by Heshmati on 4/8/2024.
// Circular Linked List Queue.cpp
//

#include "SingleLL.h"
#include <iostream>

using namespace std;


void SingleLLQueue::Enqueue(int data) {
    node* new_node = new node(data);
    if(head == nullptr) { // No items in Queue
        head = new_node;
        tail = new_node;
    } else {
        tail->next = new_node;
        tail = new_node;
    }
}


int SingleLLQueue::Dequeue() {
    node* node = head;
    int data = node->data;
    if(node->next == nullptr) { // Only one item in Queue
        head = nullptr;
        tail = nullptr;
    } else {
        head = node->next;
    }
    delete node;
    return data;
}


int SingleLLQueue::peek() {
    return head->data;
}


bool SingleLLQueue::isEmpty() {
    return head == nullptr;
}


int SingleLLQueue::getLength() {
    if(this->isEmpty()) return 0;
    Iterator pos = this->begin();
    int length = 0;
    while(true) {
        length++;
        if(pos == this->end()) break;
        ++pos;
    }


    return length;
}


void SingleLLQueue::print() {
    Iterator pos = this->begin();
    if(this->isEmpty()) {
        cout << endl;
        return;
    }
    while(true) {
        if(pos == this->end()) {
            cout << pos.get() << endl;
            break;
        } else {
            cout << pos.get() << ", ";
            pos.next();
        }
    }
}


SingleLLQueue::~SingleLLQueue() {
    while(!this->isEmpty()) {
        this->Dequeue();
    }
}


Iterator SingleLLQueue::begin() {
    Iterator iter;
    iter.position = head;
    iter.container = this;
    return iter;
}


Iterator SingleLLQueue::end() {
    Iterator iter;
    iter.position = tail;
    iter.container = this;
    return iter;
}


Iterator::Iterator() {
    position = nullptr;
    container = nullptr;
}


int Iterator::get() const {
    return position->data;
}


void Iterator::next() {
    position = position->next;
}


bool Iterator::equals(Iterator other) const {
    return position == other.position;
}


Iterator& Iterator::operator++() {
    this->next();
    return *this;
}


bool Iterator::operator==(const Iterator &other) const {
    return equals(other);
}


bool Iterator::operator!=(const Iterator &other) const {
    return !equals(other);
}