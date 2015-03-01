/*
 * Selection.cpp
 *
 *  Created on: Aug 17, 2014
 *      Author: Sohel Tarir
 */
#include "Selection.h"

node* mid_by_counting(node* head){
	if (!head){
		return head;
	}
	auto trailing = head;
	size_t size = 0;
	while (nullptr != head){
		++size;
		head = head->next;
	}
	size_t mid = size/2;
	while (mid--){
		trailing = trailing->next;
	}
	return trailing;
}

node* mid(node* head){
	auto trailing = head;
	while (nullptr != head){
		head = head->next;
		if (head){
			head = head->next;
			trailing = trailing->next;
		}
	}
	return trailing;
}

node* kth_from_end(node* head, size_t k){
	auto trailing = head;
	while (k-- && nullptr != head){
		head = head->next;
	}
	while (nullptr != head && nullptr != head->next){
		head = head->next;
		trailing = trailing->next;
	}
	return trailing;
}
