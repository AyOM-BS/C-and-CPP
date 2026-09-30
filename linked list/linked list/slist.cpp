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
SL* slist_find(SL* head, datatype val)
{
	SL* cur = head;
	if (cur)
	{
		while (cur->data != val)
		{
			cur = cur->next;
		}
		if (cur->data == val)
		{
			return cur;

		}
		else
		{
			printf("没有找到该数据\n");
			return NULL;
		}
	}
	else
	{
		printf("链表为空\n");
		return NULL;
	}
	
}
void slist_insertfront(SL** head, datatype pos, datatype val)
{
	SL* p = slist_find(*head, pos);
	if (p != NULL)
	{
		if (p == *head)
		{
			slist_pushfront(head, val);
		}
		else
		{
			SL* newnode = (SL*)malloc(sizeof(SL));
			SL* prepos = *head;
			while (prepos->next != p)
			{
				prepos = prepos->next;
			}
			newnode->data = val;
			newnode->next = p;
			prepos->next = newnode;
		}
	}
	else
	{
		printf("没有找到该位置\n");
	}
}
void slist_insertafter(SL** head, datatype pos, datatype val)
{
	SL* p = slist_find(*head, pos);
	if (p != NULL)
	{
		SL* newnode = (SL*)malloc(sizeof(SL));
		newnode->data = val;
		newnode->next = p->next;
		p->next = newnode;
	}
	else
	{
		printf("没有找到该位置\n");
	}
}
void slist_erase(SL** head, datatype pos)
{
	SL* p = slist_find(*head, pos);
	if (p == *head)
	{
		slist_popfront(head);
	}
	else
	{
		SL* prep = *head;
		if (p)
		{
			while (prep->next != p)
			{
				prep = prep->next;
			}
			prep->next = p->next;
			free(p);
			p = prep->next->next;
		}
		else
		{
			printf("没有找到该位置\n");
		}
	}
}
//void slist_destroy(SL* head)
//{
//	SL* cur = head;
//	while (cur != NULL)
//	{
//		SL* next = cur->next;
//		free(cur);
//		cur = next;
//	}
//}
// 销毁了链表，但head指针仍然指向原来的地址，成为了野指针
void slist_destroy(SL** head)
{
	if (*head == NULL)
	{
		printf("链表为空，无需销毁\n");
	}
	else
	{
		SL* cur = *head;
		while (cur != NULL)
		{
			SL* next = cur->next;
			free(cur);
			cur = next;
		}
		*head = NULL;
	}
}