#pragma once
#include <stdio.h>
#include <stdlib.h>
typedef int datatype;
typedef struct slist
{
	datatype data;
	struct slist* next;// 指向下一个节点的指针
}SL;
void slist_init(SL* head);// 初始化链表
void slist_print(SL* head);// 打印链表
void slist_pushback(SL** head, datatype val);// 在链表尾部插入数据
void slist_pushfront(SL** head, datatype val);// 在链表头部插入数据
void slist_popback(SL** head);// 删除链表尾部数据
void slist_popfront(SL** head);// 删除链表头部数据
SL* slist_find(SL* head, datatype val);// 查找链表中是否存在指定数据
void slist_insertfront(SL** head, datatype pos, datatype val);// 在链表指定位置(pos前)(除调用slist_find外为O(n))插入数据
void slist_insertafter(SL** head, datatype pos, datatype val);// 在链表指定位置(pos后)(除调用slist_find外为O(1))插入数据
void slist_erase(SL** head, datatype pos);// 删除链表指定位置的数据
//void slist_destroy(SL* head);// 销毁链表，有野指针
void slist_destroy(SL** head);// 销毁链表，没有野指针