//
// Created by minh on 5/10/18.
//

#ifndef DATA_STRUCTURES_C_NODE_H
#define DATA_STRUCTURES_C_NODE_H

#include <cstddef>

template <typename T>
class Node {
public:
	T value;
	Node<T> * next;

	Node(T val);
};

template <typename T>
Node<T>::Node(T val) : value(val), next(NULL) { }
#endif //DATA_STRUCTURES_C_NODE_H
