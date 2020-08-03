#include "sort.h"

TEST_BUBBLE_SORT(){
	int i;
	int array[1000] = {0};
	for(i = 0; i < 1000; i++){
		array[i] = rand();
	}
	int length = sizeof(array)/sizeof(int);
	bubble_sort(array, length);
	for(i = 0; i < length-1; i++){
		if(array[i] > array[i+1]){
			printf("bubble sort error!\n");
			return;
		}
	}
	printf("bubble sort success!\n");
	return;
}

TEST_INSERT_SORT(){
	int i;
	int array[1000] = {0};
	for(i = 0; i < 1000; i++){
		array[i] = rand();
	}
	int length = sizeof(array)/sizeof(int);
	insert_sort(array, length);
	for(i = 0; i < length-1; i++){
		if(array[i] > array[i+1]){
			printf("insert sort error!\n");
			return;
		}
	}
	printf("insert sort success!\n");
	return;
}

TEST_SELECT_SORT(){
	int i;
	int array[1000] = {0};
	for(i = 0; i < 1000; i++){
		array[i] = rand();
	}
	int length = sizeof(array)/sizeof(int);
	select_sort(array, length);
	for(i = 0; i < length-1; i++){
		if(array[i] > array[i+1]){
			printf("select sort error!\n");
			return;
		}
	}
	printf("select sort success!\n");
	return;
}

TEST_QUICK_SORT(){
	int i;
	int array[1000] = {0};
	for(i = 0; i < 1000; i++){
		array[i] = rand();
	}
	int length = sizeof(array)/sizeof(int);
	quick_sort(array, 0, length-1);
	for(i = 0; i < length-1; i++){
		if(array[i] > array[i+1]){
			printf("quick sort error!\n");
			return;
		}
	}
	printf("quick sort success!\n");
	return;
}

TEST_MERGE_SORT(){
	int i;
	int array[1000] = {0};
	for(i = 0; i < 1000; i++){
		array[i] = rand();
	}
	int length = sizeof(array)/sizeof(int);
	merge_sort(array, 0, length-1);
	for(i = 0; i < length-1; i++){
		if(array[i] > array[i+1]){
			printf("merge sort error!\n");
			return;
		}
	}
	printf("merge sort success!\n");
	return;
}

TEST_HEAP_SORT(){
	int i;
	int array[1000] = {0};
	for(i = 0; i < 1000; i++){
		array[i] = rand();
	}
	int length = sizeof(array)/sizeof(int);
	heap_sort(array, length);
	for(i = 0; i < length-1; i++){
		if(array[i] > array[i+1]){
			printf("heap sort error!\n");
			return;
		}
	}
	printf("heap sort success!\n");
	return;
}

TEST_SORT_SPEED(long long int num){
	int i;
	struct timeval  tmv1;  
    struct timeval  tmv2;  
    float tmcost; 

    //int array[num] = {0};
    int *array = (int*)malloc(sizeof(int) * num);
	for(i = 0; i < num; i++){
		array[i] = rand();
	}
	//int length = sizeof(array)/sizeof(int);
	
	gettimeofday(&tmv1, NULL);  
	bubble_sort(array, num);
	gettimeofday(&tmv2, NULL);  
	tmcost = (float)(tmv2.tv_sec*1000*1000+tmv2.tv_usec - tmv1.tv_sec*1000*1000+tmv1.tv_usec)/1000000;  
        printf("bubble sort %lld data costs %f s\n", num, tmcost); 

    for(i = 0; i < num; i++){
		array[i] = rand();
	}
	
	gettimeofday(&tmv1, NULL);  
	insert_sort(array, num);
	gettimeofday(&tmv2, NULL);  
	tmcost = (float)(tmv2.tv_sec*1000*1000+tmv2.tv_usec - tmv1.tv_sec*1000*1000+tmv1.tv_usec)/1000000;  
        printf("insert sort %lld data costs %f s\n", num, tmcost); 

	for(i = 0; i < num; i++){
		array[i] = rand();
	}
	
	gettimeofday(&tmv1, NULL);  
	select_sort(array, num);
	gettimeofday(&tmv2, NULL);  
	tmcost = (float)(tmv2.tv_sec*1000*1000+tmv2.tv_usec - tmv1.tv_sec*1000*1000+tmv1.tv_usec)/1000000;  
        printf("select sort %lld data costs %f s\n", num, tmcost); 


    for(i = 0; i < num; i++){
		array[i] = rand();
	}
	
	gettimeofday(&tmv1, NULL);  
	quick_sort(array, 0, num-1);
	gettimeofday(&tmv2, NULL);  
	tmcost = (float)(tmv2.tv_sec*1000*1000+tmv2.tv_usec - tmv1.tv_sec*1000*1000+tmv1.tv_usec)/1000000;  
        printf("quick sort %lld data costs %f s\n", num, tmcost); 


    for(i = 0; i < num; i++){
		array[i] = rand();
	}
	
	gettimeofday(&tmv1, NULL);  
	merge_sort(array, 0, num-1);
	gettimeofday(&tmv2, NULL);  
	tmcost = (float)(tmv2.tv_sec*1000*1000+tmv2.tv_usec - tmv1.tv_sec*1000*1000+tmv1.tv_usec)/1000000;  
        printf("merge sort %lld data costs %f s\n", num, tmcost); 
    

    for(i = 0; i < num; i++){
		array[i] = rand();
	}
	
	gettimeofday(&tmv1, NULL);  
	heap_sort(array, num);
	gettimeofday(&tmv2, NULL);  
	tmcost = (float)(tmv2.tv_sec*1000*1000+tmv2.tv_usec - tmv1.tv_sec*1000*1000+tmv1.tv_usec)/1000000;  
        printf("heap sort %lld data costs %f s\n", num, tmcost); 

}

int main(int argc, char* argv[]){
	if(argc != 2){  
	    fprintf(stderr, "%% ERROR! Usage: %s <data_num>\n", argv[0]);  
	    return 1;  
    }  

	long long int data_num = atoll(argv[1]);
	if(data_num <= 0){
		fprintf(stderr, "%% ERROR! Usage: %s <data_num>\n", argv[0]);  
	    return 1;
	}

	//测试冒泡排序
	TEST_BUBBLE_SORT();

	//测试插入排序
	TEST_INSERT_SORT();

	//测试选择排序
	TEST_SELECT_SORT();

	//测试快速排序
	TEST_QUICK_SORT();

	//测试归并排序
	TEST_MERGE_SORT();

	//测试堆排序
	TEST_HEAP_SORT();

	//测试排序速度
	TEST_SORT_SPEED(data_num);

	return 0;
}