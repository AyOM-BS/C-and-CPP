//设计你的循环队列实现。 循环队列是一种线性数据结构，其操作表现基于 FIFO（先进先出）原则并且队尾被连接在队首之后以形成一个循环。它也被称为“环形缓冲器”。
//循环队列的一个好处是我们可以利用这个队列之前用过的空间。在一个普通队列里，一旦一个队列满了，我们就不能插入下一个元素，即使在队列前面仍有空间。但是使用循环队列，我们能使用这些空间去存储新的值。
#include <stdio.h>
#include <stdlib.h>

//数组实现的循环队列
//typedef struct {
//	int* data;
//	int front;
//	int tail;
//	int capacity;
//} MyCircularQueue;
//
//MyCircularQueue* myCircularQueueCreate(int k) {
//	MyCircularQueue* obj = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
//	obj->capacity = k+1;
//	obj->front = obj->tail = 0;
//	obj->data = (int*)malloc(sizeof(int) * obj->capacity);
//	return obj;
//}
//
//bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
//	if (myCircularQueueIsFull(obj))
//	{
//		return false;
//	}
//	else
//	{
//		obj->data[obj->tail] = value;
//		obj->tail = (++obj->tail) % obj->capacity;
//		return true;
//	}
//}
//
//bool myCircularQueueDeQueue(MyCircularQueue* obj) {
//	if (myCircularQueueIsEmpty(obj))
//	{
//		return false;
//	}
//	else
//	{
//		obj->front = (++obj->front) % obj->capacity;
//		return true;
//	}
//}
//
//int myCircularQueueFront(MyCircularQueue* obj) {
//	if(myCircularQueueIsEmpty(obj))
//	{
//		return -1;
//	}
//	return obj->data[obj->front];
//}
//
//int myCircularQueueRear(MyCircularQueue* obj) {
//	if(myCircularQueueIsEmpty(obj))
//	{
//		return -1;
//	}
//	return obj->data[(obj->tail-1 + obj->capacity) % obj->capacity];
//}
//
//bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
//	return obj->front == obj->tail;
//}
//
//bool myCircularQueueIsFull(MyCircularQueue* obj) {
//	return obj->front == (obj->tail+1) % obj->capacity;
//}
//
//void myCircularQueueFree(MyCircularQueue* obj) {
//	free(obj->data);
//	free(obj);
//}

//链表实现的循环队列
//typedef struct Node {
//	int val;
//	struct Node* next;
//}node;
//typedef struct {
//	node* head;
//	node* tail;
//	int capacity;
//} MyCircularQueue;
//bool myCircularQueueIsEmpty(MyCircularQueue* obj);
//bool myCircularQueueIsFull(MyCircularQueue* obj);
//MyCircularQueue* myCircularQueueCreate(int k) {
//	MyCircularQueue* obj = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
//	obj->capacity = k + 1;
//	obj->head = (node*)malloc(sizeof(node));
//	obj->tail = obj->head;
//	node* cur = obj->tail;
//	for (int i = 0; i < k; i++)
//	{
//		node* newnode = (node*)malloc(sizeof(node));
//		cur->next = newnode;
//		cur = newnode;
//	}
//	cur->next = obj->head;
//	return obj;
//}
//
//bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
//	if (myCircularQueueIsFull(obj))
//	{
//		return false;
//	}
//	else
//	{
//		obj->tail->val = value;
//		obj->tail = obj->tail->next;
//		return true;
//	}
//}
//
//bool myCircularQueueDeQueue(MyCircularQueue* obj) {
//	if (myCircularQueueIsEmpty(obj))
//	{
//		return false;
//	}
//	else
//	{
//		obj->head = obj->head->next;
//		return true;
//	}
//}
//
//int myCircularQueueFront(MyCircularQueue* obj) {
//	if (myCircularQueueIsEmpty(obj))
//	{
//		return -1;
//	}
//	else
//	{
//		return obj->head->val;
//	}
//}
//
//int myCircularQueueRear(MyCircularQueue* obj) {
//	if(myCircularQueueIsEmpty(obj))
//	{
//		return -1;
//	}
//	node* cur = obj->head;
//	while (cur->next != obj->tail)
//	{
//		cur = cur->next;
//	}
//	return cur->val;
//}
//
//bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
//	return obj->head == obj->tail;
//}
//
//bool myCircularQueueIsFull(MyCircularQueue* obj) {
//	return obj->head == obj->tail->next;
//}
//
//void myCircularQueueFree(MyCircularQueue* obj) {
//	node* cur = obj->head;
//	for(int i = 0; i < obj->capacity; i++)
//	{ 
//		node* next = cur->next;
//		free(cur);
//		cur = next;
//	}
//	free(obj);
//}

/**
 * Your MyCircularQueue struct will be instantiated and called as such:
 * MyCircularQueue* obj = myCircularQueueCreate(k);
 * bool param_1 = myCircularQueueEnQueue(obj, value);

 * bool param_2 = myCircularQueueDeQueue(obj);

 * int param_3 = myCircularQueueFront(obj);

 * int param_4 = myCircularQueueRear(obj);

 * bool param_5 = myCircularQueueIsEmpty(obj);

 * bool param_6 = myCircularQueueIsFull(obj);

 * myCircularQueueFree(obj);
*/