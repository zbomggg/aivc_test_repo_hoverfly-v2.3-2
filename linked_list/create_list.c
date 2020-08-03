#include "linked_list.h"

node* create_list(){
	node *head, *tail, *new_one;
	int x, cycle = 1;
	head = (node*)malloc(sizeof(node));
	tail = head;

	while(1){
		printf("pls input list value\n");
		scanf("%d", &x);
		if(x == 0){
			break;
		}
		new_one = (node*)malloc(sizeof(node));
		new_one->value = x;
		tail->next = new_one;
		tail = new_one;
	}

	head = head->next;
	tail->next = NULL;

	return head;
}

