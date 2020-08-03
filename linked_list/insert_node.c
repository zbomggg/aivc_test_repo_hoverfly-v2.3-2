#include "linked_list.h"

//suppose the node is ordered
node* insert_node(node* head, int i_value){
	node* insert_node = (node*)malloc(sizeof(node));
	insert_node->value = i_value;

	if(head == NULL){
		insert_node->next = NULL;
		return insert_node;
	}

	node *front = head;
	node *back = head->next;

	while(back != NULL && i_value > back->value){
		back = back->next;
		front = front->next;
	}

	if(back == NULL){
		front->next = insert_node;
		insert_node->next = NULL;
	}else{
		front->next = insert_node;
		insert_node->next = back;
	}

	return head;
}