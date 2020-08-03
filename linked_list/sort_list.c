#include "linked_list.h"

node* sort_list(node* head){
	int i, j, tmp;
	node* cur;

	if(head == NULL || head->next == NULL){
		return head;
	}

	int length = list_length(head);

	for(i = 0; i < length; i++){
		cur = head;
		for(j = 0; j < length - i && cur->next != NULL; j++){
			if(cur->value > cur->next->value){
				tmp = cur->value;
				cur->value = cur->next->value;
				cur->next->value = tmp;
			}
			cur = cur->next;
		}
	}

	return head;
}