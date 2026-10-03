#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int datatype;

typedef struct list
{
	struct list* next;
	struct list* prev;
	datatype data;
 }SL;

void list_init(SL** head);
void list_print(SL* head);
void list_pushback(SL* head, datatype data);
void list_popback(SL* head);
void list_pushfront(SL* head, datatype data);
void list_popfront(SL* head);
SL* list_find(SL* head, datatype data);
void list_insert(SL* head,datatype pos, datatype data);//ÔÚposÇ°²åÈë
void list_erase(SL* head, datatype pos);//Ä¨³ıpos
void list_destroy(SL** head);