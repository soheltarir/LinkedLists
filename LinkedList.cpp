/*
 * LinkedList.cpp
 *
 *  Created on: Aug 16, 2014
 *      Author: Sohel Tarir
 */
#include "LinkedList.h"

node* insert(node* head, int data){
	return new node(head, data);
}

node* insert_sorted(node* head, int data){
	if (nullptr == head || data <= head->data){
		return new node(head, data);
	}
	auto current = head;
	while (nullptr != current->next && (current->next->data < data)){
		current = current->next;
	}
	if (nullptr == current->next){
		current->next = new node(data);
	}
	else{
		current->next = new node(current->next, data);
	}
	return head;
}
node* find(node* head, int value){
	while(nullptr != head && head->data != value){
		head = head->next;
	}
	return head;
}

node* remove(node* head, node* target){
	if (head == target){
		head = head->next;
		delete target;
		return head;
	}
	auto temp = head;
	while (nullptr != temp->next && target != temp->next){
		temp = temp->next;
	}
	if (target == temp->next){
		temp->next = temp->next->next;
		delete target;
	}
	return head;
}
