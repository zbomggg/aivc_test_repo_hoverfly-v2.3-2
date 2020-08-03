#include <stdio.h>
#include <stdlib.h>

typedef struct student{
	int value;
	struct student* next;
}node;

node* create_list();
void print_list(node* head);
int list_length(node* head);
node* sort_list(node* head);
node* delete_node(node* head, int d_node);
node* insert_node(node* head, int i_value);

