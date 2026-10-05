#include "node.h"

Node::Node(int value, Node* next): value(v), next(next) {
    // leave this empty
}

Node::int getValue() const {
    return value;
}

Node::Node* getNext() const {
        return next;
}

Node::void setNext(Node* n) {
    next = n;
}