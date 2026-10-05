#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int datatype;

typedef struct QueueNode
{
	struct QueueNode* next;
	datatype data;
}QN;
typedef struct Queue
{
	QN* head;
	QN* tail;
}Q;

void queue_init(Q* q);
void queue_push(Q* q, datatype data);
void queue_pop(Q* q);
datatype queue_front(Q* q);
datatype queue_back(Q* q);
int queue_size(Q* q);
bool queue_empty(Q* q);
void queue_destroy(Q* q);