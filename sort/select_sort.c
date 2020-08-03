#include "sort.h"

//选择排序
//核心思想：遍历每个元素，每一次遍历都找出当前遍历到的最小元素的下标
int select_sort(int array[], int length){
	int i, j, min_index, tmp;

	for(i = 0; i < length; i++){
		min_index = i;							//暂时把第一个元素设为最小
		for(j = i+1; j < length; j++){
			if(array[min_index] > array[j]){	//依次向后比较各个元素
				min_index = j;					//如有比当前最小元素还小的元素，则min_index记录该元素下标
			}
		}
		//一轮下来，min_index记录了最小元素的下标，如果不是第一个元素，则将第一个元素
		//和最小元素交换，这样每轮只交换了一次数据，就可以将当前最小元素置于最前列
		if(min_index != i){
			tmp = array[i];
			array[i] = array[min_index];
			array[min_index] = tmp;
		}
	}
}
