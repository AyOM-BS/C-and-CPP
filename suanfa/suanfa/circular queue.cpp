//������ѭ������ʵ�֡� ѭ��������һ���������ݽṹ����������ֻ��� FIFO���Ƚ��ȳ���ԭ���Ҷ�β�������ڶ���֮�����γ�һ��ѭ������Ҳ����Ϊ�����λ���������
//ѭ�����е�һ���ô������ǿ��������������֮ǰ�ù��Ŀռ䡣��һ����ͨ�����һ��һ���������ˣ����ǾͲ��ܲ�����һ��Ԫ�أ���ʹ�ڶ���ǰ�����пռ䡣����ʹ��ѭ�����У�������ʹ����Щ�ռ�ȥ�洢�µ�ֵ��
//#include <stdio.h>
//#include <stdlib.h>

//����ʵ�ֵ�ѭ������
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

//����ʵ�ֵ�ѭ������
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