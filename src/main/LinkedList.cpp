//
// Created by minh on 5/10/18.
//

#include <cstddef>
#include <iostream>
#include "Node.h"
#include "LinkedList.h"

LinkedList::LinkedList() : head(NULL), tail(NULL), count(0) {}

int LinkedList::size() {
	return count;
}

void LinkedList::addFirst(int val) {
	Node * newNode = new Node(val);
	newNode -> next = head;
	head = newNode;

	if (count == 0) {
		tail = head;
	}
	count++;
}

void LinkedList::printList() {
	Node * current = head;
	while (current != NULL) {
		std::cout << current -> value << "\t";
		current = current -> next;
	}
}
