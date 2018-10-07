//
// Created by minh on 5/10/18.
//

#ifndef DATA_STRUCTURES_C_LINKEDLIST_H
#define DATA_STRUCTURES_C_LINKEDLIST_H

#include <cstddef>
#include <iostream>
#include "Node.h"
#include "LinkedList.h"

template <typename T>
class LinkedList {
private:
	int count;
	Node<T> * head;
	Node<T> * tail;
public:
	LinkedList();
	int size();
	void addFirst(T val);
	void printList();
};

template <typename T>
LinkedList<T>::LinkedList() : head(NULL), tail(NULL), count(0) {}

template <typename T>
int LinkedList<T>::size() {
	return count;
}

template <typename T>
void LinkedList<T>::addFirst(T val) {
	Node<T> * newNode = new Node<T>(val);
	newNode -> next = head;
	head = newNode;

	if (count == 0) {
		tail = head;
	}
	count++;
}

template <typename T>
void LinkedList<T>::printList() {
	Node<T> * current = head;
	while (current != NULL) {
		std::cout << current -> value << "\t";
		current = current -> next;
	}
}

#endif //DATA_STRUCTURES_C_LINKEDLIST_H
