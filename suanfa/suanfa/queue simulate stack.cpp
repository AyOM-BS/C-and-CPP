//请你仅使用两个队列实现一个后入先出（LIFO）的栈，并支持普通栈的全部四种操作（push、top、pop 和 empty）。
//实现 MyStack 类：
//void push(int x) 将元素 x 压入栈顶。
//int pop() 移除并返回栈顶元素。
//int top() 返回栈顶元素。
//boolean empty() 如果栈是空的，返回 true ；否则，返回 false 。
//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//typedef int datatype;
//
//typedef struct QueueNode
//{
//	struct QueueNode* next;
//	datatype data;
//}QN;
//typedef struct Queue
//{
//	QN* head;
//	QN* tail;
//}Q;
//void queue_init(Q* q);
//void queue_push(Q* q, datatype data);
//int queue_pop(Q* q);
//datatype queue_front(Q* q);
//int queue_size(Q* q);
//bool queue_empty(Q* q);
//void queue_destroy(Q* q);
//void queue_init(Q* q)
//{
//	assert(q);
//	q->head = NULL;
//	q->tail = NULL;
//}
//void queue_push(Q* q, datatype data)
//{
//	assert(q);
//	QN* newnode = (QN*)malloc(sizeof(QN));
//	newnode->data = data;
//	newnode->next = NULL;
//	if (!q->head)
//	{
//		q->head = q->tail = newnode;
//	}
//	else
//	{
//		q->tail->next = newnode;
//		q->tail = newnode;
//	}
//}
//int queue_pop(Q* q)
//{
//	assert(q);
//	assert(queue_empty(q) == false);
//	QN* next = q->head->next;
//	int val = q->head->data;
//	free(q->head);
//	q->head = next;
//	if (queue_empty(q))
//		q->tail = NULL;
//	return val;
//}
//datatype queue_front(Q* q)
//{
//	assert(q);
//	return q->head->data;
//}
//int queue_size(Q* q)
//{
//	assert(q);
//	int size = 0;
//	QN* cur = q->head;
//	while (cur)
//	{
//		cur = cur->next;
//		size++;
//	}
//	return size;
//}
//bool queue_empty(Q* q)
//{
//	assert(q);
//	return q->head == NULL;
//}
//void queue_destroy(Q* q)
//{
//	assert(q);
//	QN* cur = q->head;
//	while (cur)
//	{
//		QN* next = cur->next;
//		free(cur);
//		cur = next;
//	}
//	q->head = NULL;
//	q->tail = NULL;
//}
//
//typedef struct {
//	Q q1;
//	Q q2;
//} MyStack;
//
//MyStack* myStackCreate() {
//	MyStack* st = (MyStack*)malloc(sizeof(MyStack));
//	assert(st);
//	queue_init(&st->q1);
//	queue_init(&st->q2);
//	return st;
//}
//
//void myStackPush(MyStack* obj, int x) {
//	if(queue_empty(&obj->q1) && queue_empty(&obj->q2))
//	{ 
//		queue_push(&obj->q1, x);
//	}
//	else if(!queue_empty(&obj->q1) && queue_empty(&obj->q2))
//	{
//		queue_push(&obj->q1, x);
//	}
//	else
//	{
//		queue_push(&obj->q2, x);
//	}
//}
//
//int myStackPop(MyStack* obj) {
//	if (queue_empty(&obj->q1) && queue_empty(&obj->q2))
//	{
//		printf("Stack is empty, cannot pop\n");
//		exit(EXIT_FAILURE);
//	}
//	else if (!queue_empty(&obj->q1) && queue_empty(&obj->q2))
//	{
//		while (queue_size(&obj->q1) > 1)
//		{
//			int val = queue_front(&obj->q1);
//			queue_push(&obj->q2, val);
//			queue_pop(&obj->q1);
//		}
//		return queue_pop(&obj->q1);
//	}
//	else
//	{
//		while (queue_size(&obj->q2) > 1)
//		{
//			int val = queue_front(&obj->q2);
//			queue_push(&obj->q1, val);
//			queue_pop(&obj->q2);
//		}
//		return queue_pop(&obj->q2);
//	}
//}
//
//int myStackTop(MyStack* obj) {
//	if (queue_empty(&obj->q1) && queue_empty(&obj->q2))
//	{
//		printf("Stack is empty, cannot top\n");
//		exit(EXIT_FAILURE);
//	}
//	else if (!queue_empty(&obj->q1) && queue_empty(&obj->q2))
//	{
//		while (queue_size(&obj->q1) > 1)
//		{
//			int val = queue_front(&obj->q1);
//			queue_push(&obj->q2, val);
//			queue_pop(&obj->q1);
//		}
//		int val = queue_front(&obj->q1);
//		queue_push(&obj->q2, val);
//		queue_pop(&obj->q1);
//		return val;
//	}
//	else
//	{
//		while (queue_size(&obj->q2) > 1)
//		{
//			int val = queue_front(&obj->q2);
//			queue_push(&obj->q1, val);
//			queue_pop(&obj->q2);
//		}
//		int val = queue_front(&obj->q2);
//		queue_push(&obj->q1, val);
//		queue_pop(&obj->q2);
//		return val;
//	}
//}
//
//bool myStackEmpty(MyStack* obj) {
//	return queue_empty(&obj->q1) && queue_empty(&obj->q2);
//}
//
//void myStackFree(MyStack* obj) {
//	queue_destroy(&obj->q1);
//	queue_destroy(&obj->q2);
//	free(obj);
//}

/**
 * Your MyStack struct will be instantiated and called as such:
 * MyStack* obj = myStackCreate();
 * myStackPush(obj, x);

 * int param_2 = myStackPop(obj);

 * int param_3 = myStackTop(obj);

 * bool param_4 = myStackEmpty(obj);

 * myStackFree(obj);
*/