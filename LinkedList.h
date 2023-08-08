#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>

template <typename T>
class Node {
public:
    T data;
    Node* next;

    Node(T value) : data(value), next(nullptr) {}
};

template <typename T>
class LinkedList {
private:
    Node<T>* head;
    size_t size;

public:
    LinkedList() : head(nullptr), size(0) {}
    ~LinkedList() {
        Node<T>* current = head;
        while (current) {
            Node<T>* temp = current;
            current = current->next;
            delete temp;
        }
    }

    void insertAtBeginning(T value) 
    {
        Node<T>* newNode = new Node<T>(value);
        newNode->next = head;
        head = newNode;
        size++;
    }

    void insertAtEnd(T value)
    {
        Node<T>* newNode = new Node<T>(value);
        if (!head) {
            head = newNode;
        }
        else {
            Node<T>* current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = newNode;
        }
        size++;
    }

    void insertAtIndex(int index, T value)
    {
        if (index < 0 || index > size) {
            std::cout << "Error: Index out of bounds." << std::endl;
            return;
        }

        if (index == 0) {
            insertAtBeginning(value);
            return;
        }

        Node<T>* newNode = new Node<T>(value);
        Node<T>* current = head;
        int currentIndex = 0;
        while (currentIndex < index - 1) {
            current = current->next;
            currentIndex++;
        }
        newNode->next = current->next;
        current->next = newNode;
        size++;
    }

    void deleteNode(T value)
    {
        Node<T>* current = head;
        Node<T>* prev = nullptr;

        while (current) {
            if (current->data == value) {
                if (prev) {
                    prev->next = current->next;
                }
                else {
                    head = current->next;
                }
                delete current;
                size--;
                return;
            }
            prev = current;
            current = current->next;
        }
    }

    void printList() const
    {
        Node<T>* current = head;
        while (current) {
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << "nullptr" << std::endl;
    }

    size_t getSize() const
    {
        return size;
    }
};

#endif  // LINKED_LIST_H

