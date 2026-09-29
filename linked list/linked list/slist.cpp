#include "slist.h"

void slist_init(SL* head)
{
	head->data = 1;
	head->next = NULL;
}
void slist_print(SL* head)
{
	SL* cur = head;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;// 指针指向下一个节点
	}
	printf("NULL\n");
}
void slist_pushback(SL** head, datatype val)
{
	if (*head == NULL)
	{
		*head = (SL*)malloc(sizeof(SL));// 创建头节点
		(*head)->data = val;
		(*head)->next = NULL;
	}
	else
	{
		SL* tail = *head;
		while (tail->next != NULL)
		{
			tail = tail->next;// 找到链表的尾节点
		}
		SL* newnode = (SL*)malloc(sizeof(SL));// 创建新节点
		newnode->data = val;
		newnode->next = NULL;
		tail->next = newnode;
	}
}
void slist_pushfront(SL** head, datatype val)
{
	SL* newnode = (SL*)malloc(sizeof(SL));// 创建新节点
	newnode->data = val;
	newnode->next = *head;
	*head = newnode;// 将新节点插入到链表头部 
}
void slist_popback(SL** head)
{
	if (*head == NULL)// 链表为空
	{
		return;
	}
	else if ((*head)->next == NULL)// 链表只有一个节点
	{
		free(*head);
		*head = NULL;
	}
	else// 链表有多个节点
	{
		//SL* tail = *head;
		//while (tail->next != NULL)
		//{
		//	pre = tail;
		//	tail = tail->next;
		//}
		//free(tail);
		//tail = NULL;
		// 释放尾节点，但前一个指向的next并没有变成NULL，这个next指向一个被释放的空间，成为了野指针
		
		// 为解决该问题可以使用双指针，pre指向tail的前一个节点，tail指向尾节点
		SL* pre = NULL;
		SL* tail = *head;
		while (tail->next != NULL)
		{
			pre = tail;
			tail = tail->next;
		}
		free(tail);
		tail = NULL;
		pre->next = NULL;

		// 也可以用tail->next->next来解决该问题
		//SL* tail = *head;
		//while (tail->next->next != NULL)
		//{
		//	tail = tail->next;
		//}
		//free(tail->next);
		//tail->next = NULL;
	}
}
void slist_popfront(SL** head)
{
	if (*head == NULL)
	{
		return;
	}
	else
	{
		SL* next = (*head)->next;
		free(*head);
		*head = next;
	}
}
void destroy(SL* head)
{
	SL* cur = head;
	while (cur != NULL)
	{
		SL* next = cur->next;
		free(cur);
		cur = next;
	}
}