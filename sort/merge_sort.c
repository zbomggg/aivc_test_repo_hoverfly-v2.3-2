#include "sort.h"

//归并排序的核心思想是递归和分治
void merge(int array[], int start, int middle, int end){
	//申请一块当前需要排序的总数据长度的空间
	int *tmp = (int*)malloc(sizeof(int)*(end-start+1));

	int i = start;
	int j = middle+1;
	int k = 0;

	//左到中、中到右两段数据，从头开始依次找较小的元素赋值给tmp
	while(i <= middle && j <= end){
		if(array[i] < array[j]){
			tmp[k++] = array[i++];
		}else{
			tmp[k++] = array[j++];
		}
	}

	//将剩余的前半段或后半段数据附在tmp后面
	while(i <= middle){
		tmp[k++] = array[i++];
	}

	while(j <= end){
		tmp[k++] = array[j++];
	}

	//将tmp数据赋给array中的当前数据段，也就是从start到end这段
	for(i = 0; i < k; i++){
		array[start+i] = tmp[i];
	}

	free(tmp);
}

void merge_sort(int array[], int start, int end){
	//递归的退出条件
	if(array == NULL || start >= end)
		return;

	//将数组分为前后两半部分，再递归拆分各子段
	int middle = (start + end) / 2;

	merge_sort(array, start, middle);
	
	merge_sort(array, middle+1, end);
	
	merge(array, start, middle, end);
		
}
