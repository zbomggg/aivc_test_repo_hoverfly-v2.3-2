#include "sort.h"

//插入排序
void insert_sort(int array[], int length){
	int i, j, cur;
	//从第二个元素开始，因此后续的每次插入，其之前的数据已经是升序排列的
	for( j = 1; j < length; j++){		
		i = j - 1;						//i为当前待插入元素的前一个元素
		cur = array[j];					//暂存当前待插入元素
		//比较当前待插入元素和之前元素的大小，如没有前一个元素大，
		//则将比较的元素后移，继续比较前前元素，直至找到比当前待插入元素小的元素，
		//此时之前移动空出来的位置用来存放当前待插入元素
		while(cur < array[i]){			
			array[i+1] = array[i];  //后移
			i--;
			if(i == -1)	//i等于-1表明已比到了第一个元素
				break;
		}
		array[i+1] = cur; //将当前元素插入找到的第一个比其小的元素之前
	}
}
