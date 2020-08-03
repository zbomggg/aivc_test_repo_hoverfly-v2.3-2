#include "linked_list.h"

int list_length(node* head){
	if(head == NULL)
		return 0;
	int n = 1;
	while(head->next != NULL){
		n++;
		head = head->next;
	}
	return n;
}