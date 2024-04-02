//
// Created by Heshmati on 3/4/2024.
//

#include <iostream>
#include "LinkedList.h"

using namespace std;
 /**
  * @brief Append a new node to the end of the list
  * @param data Int to be stored in the new node
  * @example list.Append(5);
  */
void LinkedList::Append(int data) {
    Node newNode(data);
    if(this->head == nullptr) { // if the list is empty
        this->head = &newNode; // create a new node and set it to the head
        this->tail = this->head; // set the tail to the head
    } else { // if the list is not empty
        this->tail->next = &newNode; // set the current tail's next pointer to the new node
        this->tail = &newNode; // set the tail to the new node
    }
}

/**
 * @brief Prepend a new node to the beginning of the list
 * @param data Int to be stored in the new node
 * @example list.Prepend(5);
 */
void LinkedList::Prepend(int data) {
    Node newNode(data); // create a new node
    if(this->head == nullptr) { // if the list is empty
        this->head = &newNode; // set the head to the new node
        this->tail = this->head; // set the tail to the head
    } else { // if the list is not empty
        newNode.next = this->head; // set the new node's next pointer to the current head
        this->head = &newNode; // set the head to the new node
    }
}
/**
 * @brief Insert a new node after a node with a given value
 * @param after Value to search for in the list
 * @param data Int to be stored in the new node
 * @example list.InsertAfter(5, 10);
 * Will insert a new node with the value of 10 after the first node with the value of 5
 * If the value of 5 is not found, the new node will be appended to the end of the list
 */
void LinkedList::InsertAfter(int after, int data) {
    for(Node *current = this->head; current != nullptr; current = current->next) { // iterate through the list
        if(current->data == after) { // if the current node's data is equal to the data we want to insert after
            Node newNode(data); // create a new node
            newNode.next = current->next; // set the new node's next pointer to the current node's next pointer
            current->next = &newNode; // set the current node's next pointer to the new node
            return;
        }
    }
    this->Append(data); // if the node with the data we want to insert after is not found, append the new node to the end of the list
}

/**
 * @brief Remove a node after a node with a given value
 * @param data Value to search for in the list
 * @example list.RemoveAfter(5);
 * Will remove the node after the first node with the value of 5
 * If the value of 5 is not found, nothing will happen
 */

void LinkedList::RemoveAfter(int data) {
    for(Node *current = this->head; current != nullptr; current = current->next) { // iterate through the list
        if(current->data == data) { // if the current node's data is equal to the data we want to remove after
            if(current->next == nullptr) return; // if the next node is null, return (there is nothing to remove
            Node *temp = current->next; // create a temporary node and set it to the current node's next pointer
            current->next = current->next->next; // set the current node's next pointer to the next node's next pointer
            delete temp; // delete the temporary node
            return;
        }
    }
}

/**
 * @brief Check if the list is empty
 * @return True if the list is empty, false if it is not
 * @example list.isEmpty();
 */
bool LinkedList::isEmpty() {
    return this->head == nullptr; // if the head is null, the list is empty and we return true
}

/**
 * @brief Print the list
 * @example list.printList();
 */
void LinkedList::printList() {
    for(Node *current = this->head; current != nullptr; current = current->next) { // iterate through the list
        if(current->next != nullptr) { // if the current node is not the last node
            cout << current->data << ", "; // print the current node's data
        } else cout << current->data << endl; // if the current node is the last node, print the current node's data and end the line
    }
}

/**
 * @brief Delete a node with a given value
 * @param data Value to search for in the list
 * @example list.deleteNode(5);
 * Will delete the first node with the value of 5
 * If the value of 5 is not found, nothing will happen
 */
void LinkedList::deleteNode(int data) {
    Node *current = this->head; // create a new node and set it to the head
    Node *prev = nullptr; // create a new node and set it to null
    while(current != nullptr) { // iterate through the list
        if(current->data == data) { // if the current node's data is equal to the data we want to delete
            if(prev == nullptr) { // if the previous node is null (if the current node is the head)
                this->head = current->next; // set the head to the current node's next pointer
            } else { // if the previous node is not null
                prev->next = current->next; // set the previous node's next pointer to the current node's next pointer
            } // delete the current node
            delete current; // delete the current node
            return;
        }
        prev = current; // set the previous node to the current node
        current = current->next; // set the current node to the next node
    }
}

/**
 * @brief Search for a node with a given value
 * @param data Value to search for in the list
 * @return Pointer to the node with the given value
 * @example list.search(5);
 * Will return a pointer to the first node with the value of 5
 * If the value of 5 is not found, it will return null
 */
Node *LinkedList::search(int data) {
    for(Node* current = this->head; current != nullptr; current = current->next) { // iterate through the list
        if(current->data == data) { // if the current node's data is equal to the data we want to search for
            return current; // return the current node
        }
    }
    return nullptr; // if the data is not found, return null
}

/**
 * @brief Get the size of the list
 * @return The size of the list
 * @example list.getSize();
 */
int LinkedList::getSize() {
   int size = 0; // create a variable to store the size of the list
    for(Node *current = this->head; current != nullptr; current = current->next) { // iterate through the list
         size++; // increment the size
    }
    return size; // return the size
}

Iterator LinkedList::begin() {
    Iterator iter;
    iter.position = head;
    iter.container = this;
    return iter;
}

Iterator LinkedList::end() {
    Iterator iter;
    iter.container = this;
    iter.position = LinkedList::tail;
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

