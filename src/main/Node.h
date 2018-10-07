//
// Created by minh on 5/10/18.
//

#ifndef DATA_STRUCTURES_C_NODE_H
#define DATA_STRUCTURES_C_NODE_H
template <typename T>
class Node {
public:
	T value;
	Node<T> * next;

	Node(T val);
};
#endif //DATA_STRUCTURES_C_NODE_H
