/*
 * LinkedList.h
 *
 *  Created on: Aug 16, 2014
 *      Author: Sohel Tarir
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_
#include <stdio.h>
#include <iostream>

struct node {
	node* next;
	int data;
	explicit node(int data) : node (nullptr, data) {}
	node (node* head, int data)
		: next(head), data(data) {}
};
node* insert (node*, int);
node* insert_sorted(node*, int);
node* find(node*, int);
node* remove(node*, node*);
#endif /* LINKEDLIST_H_ */
