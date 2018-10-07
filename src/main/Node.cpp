//
// Created by minh on 5/10/18.
//

#include <cstddef>
#include "Node.h"

template <typename T>
Node<T>::Node(T val) : value(val), next(NULL) { }