#include "sort.h"

//冒泡排序
//最基本的排序，实现逻辑较为简单
//第i轮比较，从头开始逐个比较当前元素和后一个元素的大小，如大于后一个元素，则将
//两个元素交换，这样一轮下来会把最大的元素放到最后，接着进行下一轮比较，比较
//前length-i个元素
void bubble_sort(int array[], int length){
	int i, j, tmp;

	for(i = 0; i < length - 1; i++){			//表示总共进行length轮比较
		for(j = 0; j < length - i - 1; j++){	//表示比较前length-i个元素
			if(array[j] > array[j+1]){
				tmp = array[j];
				array[j] = array[j+1];
				array[j+1] = tmp;
			}
		}
	}

}

