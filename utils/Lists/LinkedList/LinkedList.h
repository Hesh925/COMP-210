//
// Created by Heshmati on 3/4/2024.
//

#ifndef COMP_210_LINKEDLIST_H
#define COMP_210_LINKEDLIST_H

using namespace std;
class Iterator;
class Node {
public:
    Node() {
        data = 0;
        next = nullptr;
    }
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
    int data;
    Node *next;
};

class LinkedList {
private:
    Node *head;
    Node *tail;
public:
    LinkedList() {
        head = nullptr;
        tail = nullptr;
    }
    ~LinkedList() {
        Node * next;
        for(Node *current = this->head; current != nullptr; current = current->next) { // iterate through the list
            next = nullptr; //TODO: finish
        };
    }

    Iterator begin();
    Iterator end();
    void Append(int data);
    void Prepend(int data);
    void InsertAfter(int after, int data);
    void RemoveAfter(int data);
    bool isEmpty();
    void printList();
    void deleteNode(int data);

    Node* search(int data);
    int getSize();

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
       Compares two iterators.
       @param other the iterator to compare with this iterator
       @return true if this iterator and other are equal
    */
    bool equals(Iterator other) const;

    // Overloaded operators
    bool operator==(const Iterator &other) const;
    bool operator!=(const Iterator &other) const;
    Iterator& operator++();

    friend class LinkedList;

private:
    Node *position;
    LinkedList *container;

    friend class LinkedList;
};

#endif //COMP_210_LINKEDLIST_H