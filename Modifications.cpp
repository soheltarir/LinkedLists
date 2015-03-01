/*
 * Modifications.cpp
 *
 *  Created on: Aug 17, 2014
 *      Author: Sohel Tarir
 */

#include "Modifications.h"

node* remove_values(node* head, int value){
	while (nullptr != head && head->data == value){
		auto temp = head;
		head = head->next;
		delete temp;
	}
	auto target = head;
	while (nullptr != target){
		while (nullptr != target->next && target->next->data == value){
			node* temp = target->next;
			target->next; target->next->next;
			delete temp;
		}
	}
	return head;
}

node * reverse(node* head){
	node* prev = nullptr;
	while (nullptr != head){
		node* temp = head->next;
		head->next = prev;
		prev = head;
		head = temp;
	}
	return prev;
}

dll_node* reverse (dll_node* head){
	if (nullptr == head) return nullptr;
	if (head->next == head->prev){
		return head;
	}
	auto tail = head;
	do{
		auto temp = tail->next;
		tail->next = tail->prev;
		tail->prev = temp;
		tail = temp;
	}while (tail != head);
	return head->prev;
}
