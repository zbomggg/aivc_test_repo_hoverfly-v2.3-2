#include "linked_list.h"

node* delete_node(node* head, int d_node){
	if(head == NULL){
		return head;
	}

	if(head->value == d_node){
		head = head->next;
		return head;
	}

	node* front = head;
	node* back = head->next;

	while(back->value != d_node && back->next != NULL){
		front = front->next;
		back = back->next;
	}

	if(back->value == d_node){
		front->next = back->next;
		free(back);
	}else{
		printf("can't find %d\n", d_node);
	}

	return head;
}