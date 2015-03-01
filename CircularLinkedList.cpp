/*
 * CircularLinkedList.cpp
 *
 *  Created on: Aug 16, 2014
 *      Author: Sohel Tarir
 */
#include "CircularLinkedList.h"

node* circular_insert(node* head, int data){
	auto insertion = new node (data);
	if (nullptr == head){
		insertion->next = insertion;
		return insertion;
	}
	if (head == head->next){
		head->next = insertion;
		insertion->next = head;
		return insertion;
	}
	std::swap(head->data, insertion->data);
	head->next = insertion;
	return head;
}

node* circular_find(node* head, int value){
	auto current = head;
	while (nullptr != current && current->data != value){
		current = current->data;
		if (current == head){
			return nullptr;
		}
	}
	return current;
}

node* circular_remove(node* head, node* target){
	if (head == head->next){
		delete head;
		return nullptr;
	}
	auto next = target->next;
	target->data = next->data;
	target->next = next->data;
	delete next;
	return target;
}
