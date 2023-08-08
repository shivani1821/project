# Linked List C++ Implementation
This is a C++ implementation of a singly linked list data structure. A linked list is a linear data structure where each element, called a node, consists of a value and a reference (or pointer) to the next node in the sequence. The last node points to nullptr, indicating the end of the list.

## Introduction
This implementation provides a generic linked list class that allows you to easily manage and manipulate a singly linked list of elements. It includes methods for inserting elements at the beginning, end, or a specific index, deleting elements, printing the list, and obtaining the size of the list.

## Methods
1. void insertAtBeginning(T value): 
Inserts a new node with the given value at the beginning of the list.
This creates a new node containing the provided value and inserts it at the beginning of the linked list. The new node becomes the new head, and its next pointer is set to the previous head.

2. void insertAtEnd(T value):
Inserts a new node with the given value at the end of the list.
This creates a new node containing the provided value and inserts it at the end of the linked list. If the list is empty, the new node becomes the head. Otherwise, the method traverses the list to find the last node and appends the new node to its next pointer.

3. void insertAtIndex(int index, T value):
Inserts a new node with the given value at the specified index.
This inserts a new node containing the provided value at the specified index in the linked list. If the index is invalid (less than 0 or greater than the current size), an error message is displayed. If the index is 0, the insertAtBeginning method is called. Otherwise, the method traverses the list to find the node before the specified index and inserts the new node after it.

4. void deleteNode(T value):
Deletes the first occurrence of a node with the specified value.
This deletes the first node with the given value from the linked list. It iterates through the list to find the node to delete, updates the previous node's next pointer to skip the node to be deleted, and then deallocates the memory for the deleted node.

5. void printList() const:
Prints the elements of the linked list.
This iterates through the linked list and prints the data value of each node, separated by an arrow (->). The list is terminated with nullptr to indicate the end.

6. size_t getSize() const: 
Returns the current size of the linked list.
This  returns the current number of nodes in the linked list, which represents its size.
