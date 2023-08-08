#include "LinkedList.h"
#include <iostream>

int main() {
    LinkedList<int> myList;

    myList.insertAtEnd(10);
    myList.insertAtEnd(20);
    myList.insertAtEnd(30);


    std::cout << "Linked List: ";
    myList.printList();


    std::cout << "Size: " << myList.getSize() << std::endl;


    myList.insertAtBeginning(5);


    std::cout << "Linked List after insertion: ";
    myList.printList();

    myList.deleteNode(20);


    std::cout << "Linked List after deletion: ";
    myList.printList();

    return 0;
}