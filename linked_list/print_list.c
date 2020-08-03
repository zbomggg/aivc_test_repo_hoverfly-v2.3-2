#include "linked_list.h"

void print_list(node* head){
	if(head == NULL)
		return;

	node* p_node = head;
	printf("the list is:\n");
	do{
		printf("%d\n", p_node->value);
		p_node = p_node->next;
	}while(p_node != NULL);

	return;
}