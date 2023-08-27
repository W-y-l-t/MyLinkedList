#include "LinkedList.h"

int main() {
    LinkedList myList;

    printf("Elements in Linked list: ");
    myList.print_list();

    myList.append_node(10);
    myList.append_node(20);
    myList.append_node(30);
    myList.append_node(40);

    printf("Elements in Linked list: ");
    myList.print_list();

    Node* smth = new Node(99);
    myList.insert_node(smth, 1);

    printf("Elements in Linked list: ");
    myList.print_list();

    myList.delete_node(3);

    printf("Elements in Linked list: ");
    myList.print_list();

    return 0;
}