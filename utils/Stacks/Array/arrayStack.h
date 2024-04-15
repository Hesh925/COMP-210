//
// Created by Heshmati on 4/8/2024.
//

#ifndef COMP_210_ARRAYSTACK_H
#define COMP_210_ARRAYSTACK_H

using namespace std;

class arrayStack {
private:
    int arraySize;
    int* array;
    int length;

    void Resize() {
        int newSize = this->arraySize * 2;
        int* newArray = new int[newSize];
        for (int i = 0; i < this->length; i++) {
            newArray[i] = this->array[i];
        }

        delete[] this->array;
        this->array = newArray;
        this->arraySize = newSize;
    }
public:
    /**
     * Constructor
     */
    arrayStack() {
        this->arraySize = 1;
        this->array = new int[arraySize];
        this->length = 0;
    }



    bool Push(int item) {
        if (this->length == this->arraySize) {
            this->Resize();
        }

        this->array[length] = item;
        this->length++;
        return true;
    }

    int Pop() {
        this->length--;
        return this->array[length + 1];
    }
    int peek() { return this->array[0]; }

    [[nodiscard]] bool isEmpty() const { return length > 0; }

    [[nodiscard]] int GetLength() const { return this->length; }

    ~arrayStack() { delete[] this->array; }
};


#endif //COMP_210_ARRAYSTACK_H
