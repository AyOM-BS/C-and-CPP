#include "double list.h"

void list_init(SL** head)
{
	*head = (SL*)malloc(sizeof(SL));
	(*head)->next = *head;
	(*head)->prev = *head;
}

void list_print(SL* head)
{
	assert(head);
	if (head->next == head)
	{
		printf("list is empty\n");
		return;
	}
	SL* cur = head->next;
	while (cur != head)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("HEAD\n");
}

void list_pushback(SL* head, datatype data)
{
	SL* tail = head->prev;
	SL* newnode = (SL*)malloc(sizeof(SL));
	tail->next = newnode;
	newnode->prev = tail;
	newnode->data = data;
	newnode->next = head;
	head->prev = newnode;
}

void list_popback(SL* head)
{
	assert(head);
	if (head->next == head)
	{
		printf("list is empty\n");
		return;
	}
	SL* tail = head->prev;
	head->prev = tail->prev;
	head->prev->next = head;
	free(tail);
}

void list_pushfront(SL* head, datatype data)
{
	SL* newnode = (SL*)malloc(sizeof(SL));
	head->next->prev = newnode;
	newnode->next = head->next;
	newnode->prev = head;
	head->next = newnode;
	newnode->data = data;
}

void list_popfront(SL* head)
{
	assert(head);
	if (head->next == head)
	{
		printf("list is empty\n");
		return;
	}
	SL* first = head->next;
	head->next = first->next;
	first->next->prev = head;
	free(first);
}

SL* list_find(SL* head, datatype data)
{
	SL* cur = head->next;
	while (cur != head)
	{
		if (cur->data == data)
		{
			return cur;
		}
		cur = cur->next;
	}
	printf("not found\n");
	return NULL;
}

void list_insert(SL* head, datatype pos, datatype data)
{
	SL* ppos = list_find(head, pos);
	if (!ppos)
	{
		printf("insert failed\n");
		return;
	}
	SL* newnode = (SL*)malloc(sizeof(SL));
	newnode->data = data;
	newnode->next = ppos;
	newnode->prev = ppos->prev;
	ppos->prev->next = newnode;
	ppos->prev = newnode;
}

void list_erase(SL* head, datatype pos)
{
	SL* ppos = list_find(head, pos);
	if (!ppos)
	{
		printf("erase failed\n");
		return;
	}
	ppos->prev->next = ppos->next;
	ppos->next->prev = ppos->prev;
	free(ppos);
}

void list_destroy(SL** head)
{
	assert(*head);
	SL* cur = (*head)->next;
	while (cur != *head)
	{
		SL* next = cur->next;
		free(cur);
		cur = next;
	}
	free(*head);
	*head = NULL;
}