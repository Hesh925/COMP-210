//
// Created by Heshmati on 3/4/2024.
//

#ifndef COMP_210_QUEUE_H
#define COMP_210_QUEUE_H

class queueItem {
public:
    int data;
    int *next;
    int *last;
    friend class queue;
};

class queue {
private:
    int *head;
    int *tail;

public:
    queue();
    void enqueue(int data);
    int* dequeue();

    bool isEmpty();
};


#endif //COMP_210_QUEUE_H
