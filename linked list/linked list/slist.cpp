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
		cur = cur->next;// ָ��ָ����һ���ڵ�
	}
	printf("NULL\n");
}
void slist_pushback(SL** head, datatype val)
{
	if (*head == NULL)
	{
		*head = (SL*)malloc(sizeof(SL));// ����ͷ�ڵ�
		(*head)->data = val;
		(*head)->next = NULL;
	}
	else
	{
		SL* tail = *head;
		while (tail->next != NULL)
		{
			tail = tail->next;// �ҵ������β�ڵ�
		}
		SL* newnode = (SL*)malloc(sizeof(SL));// �����½ڵ�
		newnode->data = val;
		newnode->next = NULL;
		tail->next = newnode;
	}
}
void slist_pushfront(SL** head, datatype val)
{
	SL* newnode = (SL*)malloc(sizeof(SL));// �����½ڵ�
	newnode->data = val;
	newnode->next = *head;
	*head = newnode;// ���½ڵ���뵽����ͷ�� 
}
void slist_popback(SL** head)
{
	if (*head == NULL)// ����Ϊ��
	{
		return;
	}
	else if ((*head)->next == NULL)// ����ֻ��һ���ڵ�
	{
		free(*head);
		*head = NULL;
	}
	else// �����ж���ڵ�
	{
		//SL* tail = *head;
		//while (tail->next != NULL)
		//{
		//	pre = tail;
		//	tail = tail->next;
		//}
		//free(tail);
		//tail = NULL;
		// �ͷ�β�ڵ㣬��ǰһ��ָ���next��û�б��NULL�����nextָ��һ�����ͷŵĿռ䣬��Ϊ��Ұָ��
		
		// Ϊ������������ʹ��˫ָ�룬preָ��tail��ǰһ���ڵ㣬tailָ��β�ڵ�
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

		// Ҳ������tail->next->next�����������
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
			printf("û���ҵ�������\n");
			return NULL;
		}
	}
	else
	{
		printf("����Ϊ��\n");
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
		printf("û���ҵ���λ��\n");
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
		printf("û���ҵ���λ��\n");
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
			printf("û���ҵ���λ��\n");
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
// �������������headָ����Ȼָ��ԭ���ĵ�ַ����Ϊ��Ұָ��
void slist_destroy(SL** head)
{
	if (*head == NULL)
	{
		printf("����Ϊ�գ���������\n");
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