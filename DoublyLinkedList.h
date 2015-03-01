/*
 * DoublyLinkedList.h
 *
 *  Created on: Aug 16, 2014
 *      Author: Sohel Tarir
 */

#ifndef DOUBLYLINKEDLIST_H_
#define DOUBLYLINKEDLIST_H_
#include <stdio.h>
#include <iostream>
struct dll_node {
	dll_node* prev;
	dll_node* next;
	int data;
	explicit dll_node(int data)
		: dll_node(this, this, data){}
	dll_node (dll_node* prev, dll_node* next, int data)
		: prev(prev), next(next), data(data) {}
};
namespace dll {

dll_node* insert(dll_node*, int);
dll_node* find(dll_node*, int);
dll_node* remove(dll_node*, dll_node*);

}
#endif /* DOUBLYLINKEDLIST_H_ */
