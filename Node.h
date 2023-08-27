#include <iostream>

class Node {
public:
    int value; // or another data
    Node* next;

    Node() { // default contructor
        this->value = 0; // or "" if data is string etc.
        this->next = NULL;
    }

    Node(int value) { // data constructor
        this->value = value;
        this->next = NULL;
    }
};