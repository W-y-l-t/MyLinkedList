#include "Node.h"

class LinkedList {
    Node* head;

public:
    
    LinkedList() { // default constructor
        this->head = NULL;
    }

    void append_node(int smth_data) { // insertion at the end of the Linked List
        Node* appended = new Node(smth_data);

        if (head == NULL) {
            head = appended;
            return;
        }

        Node* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = appended;
        return;
    }

    void insert_node(Node* inserted, int index) { // insertion at the chosen position of the Linked List
        Node* current = head;

        if (index == 0) {
            inserted->next = current;
            head = inserted;
        } else {
            for (int i = 0; i < index - 1 && current != NULL; i ++) {
                current = current->next;
            }
            if (current != NULL) {
                inserted->next = current->next;
                current->next = inserted;
            } else {
                printf("Error: failed to add node to selected position!\n");
            }
        }
        return;
    }

    void delete_node(int index) { // function to delete the node at given position
        Node* current = head;
        Node* previous = NULL;
        int linked_list_lenght = 0;

        while (current != NULL) {
            linked_list_lenght ++;
            current = current->next;
        }
        if (linked_list_lenght < index) {
            printf("Error: out of range!\n");
            return;
        }

        current = head;
        for (int i = 0; i < index; i ++) {
            previous = current;
            current = current->next;
        }
        previous->next = current->next;
        // deleted node is 'current'
        return;
    }

    void print_list() {
        Node* current = head;

        while(current != NULL) {
            printf("%d ", current->value);
            current = current->next;
        }
        printf("\n");
        return;
    }
};