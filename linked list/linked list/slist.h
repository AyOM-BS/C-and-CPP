#pragma once
#include <stdio.h>
#include <stdlib.h>
typedef int datatype;
typedef struct slist
{
	datatype data;
	struct slist* next;// ָ����һ���ڵ��ָ��
}SL;
void slist_init(SL* head);// ��ʼ������
void slist_print(SL* head);// ��ӡ����
void slist_pushback(SL** head, datatype val);// ������β����������
void slist_pushfront(SL** head, datatype val);// ������ͷ����������
void slist_popback(SL** head);// ɾ������β������
void slist_popfront(SL** head);// ɾ������ͷ������
SL* slist_find(SL* head, datatype val);// �����������Ƿ����ָ������
void slist_insertfront(SL** head, datatype pos, datatype val);// ������ָ��λ��(posǰ)(������slist_find��ΪO(n))��������
void slist_insertafter(SL** head, datatype pos, datatype val);// ������ָ��λ��(pos��)(������slist_find��ΪO(1))��������
void slist_erase(SL** head, datatype pos);// ɾ������ָ��λ�õ�����
//void slist_destroy(SL* head);// �����������Ұָ��
void slist_destroy(SL** head);// ���������û��Ұָ��

