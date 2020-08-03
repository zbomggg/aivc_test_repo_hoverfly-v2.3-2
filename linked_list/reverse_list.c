#include "linked_list.h"

int reverse_list(node* head){
	node* newH = NULL;		//new保存倒序后的头结点
	node* tmp = NULL;		//tmp暂存当前节点的下一个节点	
	node* p = head;			

	while(p)
	{
		tmp = p->next;     //tmp暂存p的下一个节点
		p->next = newH;	   //p的下一个节点指向newH（第一次为NULL）
		newH = p;		   //newH向后移动一位（移动到p的位置）
		p = tmp;		   //p向后移动一位（移动到tmp的位置）
	}					   //当p-next为空时，即移动到了末尾，这时候p的前一位（newH）即为倒序后的链表的头结点

	return newH;
}

