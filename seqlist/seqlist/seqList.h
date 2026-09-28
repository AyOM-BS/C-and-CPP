#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef int dataType;
typedef struct seqlist
{
	dataType* p;
	int size;
	int capacity;
}SL;

void seqlist_init(SL* ps);// 初始化
void seqlist_pushback(SL* ps, dataType n);// 尾插
void print(SL* ps);// 打印
void seqlist_popback(SL* ps);// 尾删
void seqlist_pushfront(SL* ps, dataType n);// 头插
void seqlist_popfront(SL* ps);// 头删
void seqlist_destroy(SL* ps);//释放空间
int seqlist_find(SL* ps, dataType n);// 查找
void seqlist_insert(SL* ps, int pos, dataType n);// 插入
void seqlist_erase(SL* ps, int pos);// 删除