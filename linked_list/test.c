#include "linked_list.h"

int main(int argc, char* argv[]){

	if(argc != 3){  
	    fprintf(stderr, "%% ERROR! Usage: %s <data need to delete> <data need to insert>\n", argv[0]);  
	    return 1;  
    }  

	int data_needto_delete = atoll(argv[1]);
	int data_needto_insert = atoll(argv[2]);
	if(data_needto_delete <= 0 || data_needto_insert <= 0){
		fprintf(stderr, "%% ERROR! Usage: %s <data_num>\n", argv[0]);  
	    return 1;
	}

	node* test_list = create_list();
	print_list(test_list);

	int n = list_length(test_list);
	printf("length of the list is %d\n", n);

	node* sorted_list = sort_list(test_list);
	printf("after sort\n");
	print_list(sorted_list);

	node* deleted_list = delete_node(sorted_list, data_needto_delete);
	printf("after delete\n");
	print_list(deleted_list);

	node* inserted_list = insert_node(deleted_list, data_needto_insert);
	printf("after insert\n");
	print_list(inserted_list);

	return 0;
}

