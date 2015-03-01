
/*
 * CircularLinkedList.h
 *
 *  Created on: Aug 16, 2014
 *      Author: Sohel Tarir
 */

#ifndef CIRCULARLINKEDLIST_H_
#define CIRCULARLINKEDLIST_H_
#include <stdio.h>
#include <iostream>
struct node {
	node* next;
	int data;
	explicit node(int data) : node (nullptr, data) {}
	node (node* head, int data)
		: next(head), data(data) {}
};

node* circular_insert(node*, int);
node* circular_find(node*, int);
node* circular_remove (node*, node*);

#endif /* CIRCULARLINKEDLIST_H_ */
