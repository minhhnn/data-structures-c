//
// Created by minh on 5/10/18.
//

#ifndef DATA_STRUCTURES_C_LINKEDLIST_H
#define DATA_STRUCTURES_C_LINKEDLIST_H

#include "Node.h"

template<typename  T>
class LinkedList {
private:
	int count;
	Node<T> head;
	Node<T> tail;
public:
	LinkedList();
	int size();
	void addFirst(T val);
	void printList();
};

#endif //DATA_STRUCTURES_C_LINKEDLIST_H
