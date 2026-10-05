#include "Queue.h"

void queue_init(Q* q)
{
	assert(q);
	q->head = NULL;
	q->tail = NULL;
}

void queue_push(Q* q, datatype data)
{
	assert(q);
	QN* newnode = (QN*)malloc(sizeof(QN));
	newnode->data = data;
	newnode->next = NULL;
	if (!q->head)
	{
		q->head = q->tail = newnode;
	}
	else
	{
		q->tail->next = newnode;
		q->tail = newnode;
	}
}

void queue_pop(Q* q)
{
	assert(q);
	assert(queue_empty(q) == false);
	QN* next = q->head->next;
	free(q->head);
	q->head = next;
	if (queue_empty(q))
		q->tail = NULL;
}

datatype queue_front(Q* q)
{
	assert(q);
	return q->head->data;
}

datatype queue_back(Q* q)
{
	assert(q);
	return q->tail->data;
}

int queue_size(Q* q)
{
	assert(q);
	int size = 0;
	QN* cur = q->head;
	while (cur)
	{
		cur = cur->next;
		size++;
	}
	return size;
}

bool queue_empty(Q* q)
{
	assert(q);
	return q->head == NULL;
}

void queue_destroy(Q* q)
{
	assert(q);
	QN* cur = q->head;
	while (cur)
	{
		QN* next = cur->next;
		free(cur);
		cur = next;
	}
	q->head = NULL;
	q->tail = NULL;
}