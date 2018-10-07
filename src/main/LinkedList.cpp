//
// Created by minh on 5/10/18.
//

#include <cstddef>
#include <iostream>
#include "Node.h"
#include "LinkedList.h"

template <typename T>
LinkedList<T>::LinkedList() : head(NULL), tail(NULL), count(0) {}

template <typename T>
int LinkedList<T>::size() {
	return size;
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
		std::cout << current.value << "\t";
		current = current -> next;
	}
}
