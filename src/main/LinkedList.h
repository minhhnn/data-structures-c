//
// Created by minh on 5/10/18.
//

#ifndef DATA_STRUCTURES_C_LINKEDLIST_H
#define DATA_STRUCTURES_C_LINKEDLIST_H

#include "Node.h"

class LinkedList {
private:
	int count;
	Node * head;
	Node * tail;
public:
	LinkedList();
	int size();
	void addFirst(int val);
	void printList();
};

#endif //DATA_STRUCTURES_C_LINKEDLIST_H
