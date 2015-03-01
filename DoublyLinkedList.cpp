/*
 * DoublyLinkedList.cpp
 *
 *  Created on: Aug 16, 2014
 *      Author: Sohel Tarir
 */
#include "DoublyLinkedList.h"
namespace dll{
dll_node* insert(dll_node* head, int data){
	if (nullptr == head) return new dll_node(data);
	auto insertion = new dll_node(head->prev, head, data);
	insertion->prev->next = insertion;
	insertion->next->prev = insertion;
	return insertion;
}

dll_node* find(dll_node* head, int value){
	auto current = head;
	while(nullptr != current && current->data != value){
		current = current->next;
		if (current == head){
			return nullptr;
		}
	}
	return current;
}

dll_node* remove(dll_node* head, dll_node* node){
	if (head->next == head){
		delete node;
		return nullptr;
	}
	node->prev->next = node->next;
	node->next->prev = node->prev;
	if (head == node){
		head = head->next;
	}
	delete node;
	return head;
}
}
