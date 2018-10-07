//
// Created by minh on 5/10/18.
//

#include <iostream>
#include "Node.h"
#include "LinkedList.h"

using namespace std;
int main() {
	LinkedList<int> list = LinkedList<int>();

	list.addFirst(2);
	list.addFirst(5);
	list.addFirst(1);
	list.addFirst(6);
	list.addFirst(8);

	cout << "List = ";
	list.printList();
	cout << endl;

	return 0;
}