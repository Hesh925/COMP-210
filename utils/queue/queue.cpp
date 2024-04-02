//
// Created by Heshmati on 3/4/2024.
//

#include "queue.h"

queue::queue() {
    this->head = nullptr;
    this->tail = nullptr;
}

void queue::enqueue(int data) {
    return;
}

int* queue::dequeue() {
    return this -> head;
}

bool queue::isEmpty() { return (this->head == nullptr); }