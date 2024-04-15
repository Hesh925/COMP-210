//
// Created by Heshmati on 4/8/2024.
//

#include "CllQueue.h"
#include <stdio.h>
#include <iostream>

using namespace std;



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

void Iterator::previous() {
    if (position == nullptr) {
        position = container->head->prev;
    }
    else {
        position = position->prev;
    }
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

void CllQueue::Enqueue(int data) {
    node* new_node = new node(data);
    if(head == nullptr) {
        head = new_node;
    } else {
        if(head->prev == nullptr) { // one item in stack
            head->prev = new_node;
            head->next = new_node;
            new_node->prev = head;
            new_node->prev = head;
            return;
        }

        new_node->prev = head->prev;
        new_node->next = head;
        head->prev->next = new_node;
        head->prev = new_node;
    }
}

int CllQueue::Dequeue() {
    node* node = head;

    head = node->next;
    head->prev = node->prev;
    return node->data;
}

int CllQueue::peek() {
    return head->data;
}

bool CllQueue::isEmpty() {
    return head == nullptr;
}

int CllQueue::getLength() {
    Iterator pos = this->begin();
    int length = 0;
    if(this->isEmpty()) return 0;
    while(true) {
        length++;
        if(pos == this->end()) break;
        ++pos;
    }

    return length;
}

void CllQueue::print() {
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


Iterator CllQueue::begin() {
    Iterator iter;
    iter.position = head;
    iter.container = this;
    return iter;
}
Iterator CllQueue::end() {
    Iterator iter;
    iter.position = head->prev;
    iter.container = this;
    return iter;
}
















