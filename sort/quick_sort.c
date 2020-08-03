#include "sort.h"

//快速排序
//采用分治+递归的思路实现
//left是数组最左边元素的下标，right是最右边元素的下标
void quick_sort(int array[], int left, int right){
	if(left > right)
		return;

	int tmp;
	int i = left;
	int j = right;
	int middle = array[left];	//以left元素为轴
	while(i < j){
		//从右向左遍历，找到第一个小于轴的元素
		while(i < j && array[j] >= middle){
			j--;
		}
		//从左向右遍历，找到第一个大于轴的元素
		while(i < j && array[i] <= middle){
			i++;
		}
		if(i > j){
			break;
		}
		//交换左边大于轴的元素和右边小于轴的元素，这样一轮下来可以
		//保证小于轴的元素在左半部分，大于轴的元素在右半部分
		tmp = array[i];
		array[i] = array[j];
		array[j] = tmp;
	}
	//交换轴和array[j]的元素，这样轴左边的元素都小于轴，右边的元素都大于轴
	array[left] = array[j];
	array[j] = middle;

	//递归调用轴的左边部分的数据
	quick_sort(array, left, j-1);
	//递归调用轴的右边部分的数据
	quick_sort(array, j+1, right);
}

