//
// Created by Heshmati on 4/8/2024.
// Circular Linked List Queue
//

#include "llqueue.h"
#include <iostream>

using namespace std;

void llQueue::Enqueue(int data) {
    node* new_node = new node(data);
    if(head == nullptr) { // No items in Queue
        head = new_node;
        tail = new_node;
    } else {
        tail->next = new_node;
        tail = new_node;
    }
}

int llQueue::Dequeue() {
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

int llQueue::peek() {
    return head->data;
}

bool llQueue::isEmpty() {
    return head == nullptr;
}

int llQueue::getLength() {
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

void llQueue::print() {
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

llQueue::~llQueue() {
    while(!this->isEmpty()) {
        this->Dequeue();
    }
}

Iterator llQueue::begin() {
    Iterator iter;
    iter.position = head;
    iter.container = this;
    return iter;
}

Iterator llQueue::end() {
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

Iterator& Iterator::operator--() {
    this->previous();
    return *this;
}

bool Iterator::operator==(const Iterator &other) const {
    return equals(other);
}

bool Iterator::operator!=(const Iterator &other) const {
    return !equals(other);
}













