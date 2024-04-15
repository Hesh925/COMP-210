//
// Created by Heshmati on 4/14/2024.
// Array Queue.h
//

#ifndef COMP_210_ARRAYQUEUE_H
#define COMP_210_ARRAYQUEUE_H

/**
 * Array Queue
 */
class arrayQueue {
private:
    int arraySize = 1;  // size of array
    int length = 0;     // number of elements in the array
    int max = -1;       // max size of the array if max < 0 then it is infinite
                        // max should be a multiple of arraySize
    int* array;         // array of integers
    void shift();       // shift the array after dequeue
    int resize();       // resize the array when needed
public:
    /**
     * Constructor
     */
    arrayQueue() {
        this->array = new int[arraySize];
    }
    /**
     * Constructor
     * @param max max size of the array
     */
    arrayQueue(int max) {
        this->max = max;
        array = new int[arraySize];
    }
    /**
     * Constructor
     * @param size size of the array
     * @param max max size of the array
     */
    arrayQueue(int size, int max) {
        if(max < size) {
            cout << "Size can not be bigger than max" << endl;
            exit(-1);
        }
        this->arraySize = size;
        this->max = max;
        this->array = new int[arraySize];
    }
    void Enqueue(int data);
    int Dequeue();
    int peek();
    void print();
    bool isEmpty();
    int getLength();
    ~arrayQueue();
};

#endif //COMP_210_ARRAYQUEUE_H