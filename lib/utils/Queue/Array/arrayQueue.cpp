//
// Created by Heshmati on 4/14/2024.
// Array Queue.cpp
//


#include <iostream>
#include "arrayQueue.h"


using namespace std;


arrayQueue::~arrayQueue() {
    delete[] this->array;
}


/**
* Resize
* @return int if zero then you chillin
*/
int arrayQueue::resize() {
    if (this->max == -1) {
        int* temp = new int[this->arraySize * 2];
        for (int i = 0; i < this->arraySize; i++) {
            temp[i] = this->array[i];
        }
        delete[] array;
        this->array = temp;
        this->arraySize *= 2;
        return 1;
    } else if (this->arraySize * 2 < this->max) {
        int* temp = new int[this->arraySize * 2];
        for (int i = 0; i < this->arraySize; i++) {
            temp[i] = this->array[i];
        }
        delete[] this->array;
        this->array = temp;
        this->arraySize *= 2;
        return 1;
    } else {
        return 0;
    }
}


void arrayQueue::shift() {
    for (int i = 0; i < this->length + 1; i++) {
        this->array[i] = this->array[i + 1];
    }
}


int arrayQueue::Dequeue() {
    if (length == 0) {
        cout << "Queue is empty" << endl;
        return -1;
    }
    int data = this->array[0];
    this->length--;
    shift();
    return data;
}




int arrayQueue::peek() {
    if (this->length == 0) {
        cout << "Queue is empty" << endl;
        return -1;
    }
    return this->array[0];
}


void arrayQueue::print() {
    for (int i = 0; i < this->length; i++) {
        cout << this->array[i] << " ";
    }
    cout << endl;
}


bool arrayQueue::isEmpty() {
    return this->length == 0;
}


int arrayQueue::getLength() {
    return this->length;
}


void arrayQueue::Enqueue(int data) {
    this->length++;
    this->array[this->length] = data;
    if (this->length + 1 == this->arraySize) resize();
    //cout << "Enqueue: " << this->array[this->length] << " Length: " << this->length << endl;
}