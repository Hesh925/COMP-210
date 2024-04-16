#include <string>
#include "CircularList.h"

using namespace std;

Node::Node(int element) {
    data = element;
    previous = nullptr;
    next = nullptr;
}

CircularList::CircularList() {
    first = nullptr;
}

void CircularList::push_back(int element) {
    Node* new_node = new Node(element);
    if (first == nullptr) { // List is empty
        first = new_node;
    }
    else {
        if (first->previous == nullptr) { // If the list has only one node
            first->previous = new_node; // set the first nodes previous pointer to the new node
            first->next = new_node; // set the first nodes next pointer to the new node
            new_node->previous = first; // set the new nodes previous pointer to the first node
            new_node->next = first; // set the new nodes next pointer to the first node
            return;
        }

        new_node->previous = first->previous; // set node previous pointer to the last node
        new_node->next = first; // set node next pointer to the first node
        first->previous->next = new_node; // set the last nodes next pointer to the new node
        first->previous = new_node; // set the first nodes previous pointer to the new node
    }
}

void CircularList::insert(Iterator iter, int element) {
    if (iter.position == nullptr) {
        push_back(element);
        return;
    }

    Node* after = iter.position;
    Node* before = after->previous;
    Node* new_node = new Node(element);
    new_node->previous = before;
    new_node->next = after;
    after->previous = new_node;
    if (before == nullptr) { // Insert at beginning
        first = new_node;
    }
    else {
        before->next = new_node;
    }
}

Iterator CircularList::erase(Iterator iter) {
    Node* remove = iter.position;
    Node* before = remove->previous;
    Node* after = remove->next;
    if (remove == first) {
        first = after;
    }
    else {
        before->next = after;
    }

    after->previous = before;

    Iterator r;
    r.position = after;
    r.container = this;
    delete remove;
    return r;
}

Iterator CircularList::begin() {
    Iterator iter;
    iter.position = first;
    iter.container = this;
    return iter;
}

Iterator CircularList::end() {
    Iterator iter;
    iter.container = this;
    iter.position = CircularList::first->previous;
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

void Iterator::previous() {
    if (position == nullptr) {
        position = container->first->previous;
    }
    else {
        position = position->previous;
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
