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
void queue_destroy(Q* q);