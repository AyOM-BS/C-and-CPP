//请你仅使用两个栈实现先入先出队列。队列应当支持一般队列支持的所有操作（push、pop、peek、empty）：
//实现 MyQueue 类：
//void push(int x) 将元素 x 推到队列的末尾
//int pop() 从队列的开头移除并返回元素
//int peek() 返回队列开头的元素
//boolean empty() 如果队列为空，返回 true ；否则，返回 false
//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//#include <stdbool.h>
//typedef int datatype;
//typedef struct Stack
//{
//	datatype* data;
//	int top;
//	int capacity;
//}SQ;
//void stack_init(SQ* sq);
//void stack_destroy(SQ* sq);
//void stack_push(SQ* sq, datatype val);
//int stack_pop(SQ* sq);
//datatype stack_top(SQ* sq);
//int stack_size(SQ* sq);
//bool stack_empty(SQ* sq);
//void stack_init(SQ* sq)
//{
//	assert(sq);
//	sq->data = NULL;
//	sq->top = 0;
//	sq->capacity = 0;
//}
//void stack_destroy(SQ* sq)
//{
//	assert(sq);
//	if (sq->data)
//	{
//		free(sq->data);
//		sq->data = NULL;
//	}
//	sq->top = 0;
//	sq->capacity = 0;
//}
//void stack_push(SQ* sq, datatype val)
//{
//	assert(sq);
//	if (sq->top == sq->capacity)
//	{
//		int newcapacity = sq->capacity ? sq->capacity * 2 : 4;
//		datatype* newdata = (datatype*)realloc(sq->data, newcapacity * sizeof(datatype));
//		if (newdata == NULL)
//		{
//			perror("realloc failed");
//			exit(EXIT_FAILURE);
//		}
//		sq->capacity = newcapacity;
//		sq->data = newdata;
//	}
//	sq->data[sq->top] = val;
//	sq->top++;
//}
//int stack_pop(SQ* sq)
//{
//	assert(sq);
//	if (sq->top == 0)
//	{
//		printf("Stack is empty, cannot pop\n");
//		return -1;
//	}
//	sq->top--;
//	return sq->data[sq->top];
//}
//datatype stack_top(SQ* sq)
//{
//	assert(sq);
//	if (sq->top == 0)
//	{
//		printf("Stack is empty, cannot get top element\n");
//		exit(EXIT_FAILURE);
//	}
//	return sq->data[sq->top - 1];
//}
//int stack_size(SQ* sq)
//{
//	assert(sq);
//	return sq->top;
//}
//bool stack_empty(SQ* sq)
//{
//	assert(sq);
//	return sq->top == 0;
//}
//
//typedef struct {
//	SQ sq1;
//	SQ sq2;
//} MyQueue;
//
//MyQueue* myQueueCreate() {
//	MyQueue* obj = (MyQueue*)malloc(sizeof(MyQueue));
//	stack_init(&obj->sq1);
//	stack_init(&obj->sq2);
//	return obj;
//}
//
//void myQueuePush(MyQueue* obj, int x) {
//	if (stack_empty(&obj->sq1) && stack_empty(&obj->sq2))
//	{
//		stack_push(&obj->sq1, x);
//	}
//	else if (!stack_empty(&obj->sq1) && stack_empty(&obj->sq2))
//	{
//		stack_push(&obj->sq1, x);
//	}
//	else
//	{
//		stack_push(&obj->sq2, x);
//	}
//}
//
//int myQueuePop(MyQueue* obj) {
//	if (stack_empty(&obj->sq1) && stack_empty(&obj->sq2))
//	{
//		printf("Queue is empty, cannot pop\n");
//		exit(EXIT_FAILURE);
//	}
//	else
//	{
//		if(stack_empty(&obj->sq1) && !stack_empty(&obj->sq2))
//		{
//			while(!stack_empty(&obj->sq2))
//			{
//				int val = stack_pop(&obj->sq2);
//				stack_push(&obj->sq1, val);
//			}
//			while (stack_size(&obj->sq1) > 1)
//			{
//				int val = stack_top(&obj->sq1);
//				stack_pop(&obj->sq1);
//				stack_push(&obj->sq2, val);
//			}
//			int val = stack_top(&obj->sq1);
//			stack_pop(&obj->sq1);
//			return val;
//		}
//		else
//		{
//			while (stack_size(&obj->sq1) > 1)
//			{
//				int val = stack_top(&obj->sq1);
//				stack_pop(&obj->sq1);
//				stack_push(&obj->sq2, val);
//			}
//			int val = stack_top(&obj->sq1);
//			stack_pop(&obj->sq1);
//			while (!stack_empty(&obj->sq2))
//			{
//				int val = stack_pop(&obj->sq2);
//				stack_push(&obj->sq1, val);
//			}
//			return val;
//		}
//	}
//}
//
//int myQueuePeek(MyQueue* obj) {
//	if (stack_empty(&obj->sq1) && stack_empty(&obj->sq2))
//	{
//		printf("Queue is empty, cannot pop\n");
//		exit(EXIT_FAILURE);
//	}
//	else
//	{
//		if (!stack_empty(&obj->sq1) && stack_empty(&obj->sq2))
//		{
//			while (stack_size(&obj->sq1) > 1)
//			{
//				int val = stack_top(&obj->sq1);
//				stack_pop(&obj->sq1);
//				stack_push(&obj->sq2, val);
//			}
//			int val = stack_pop(&obj->sq1);
//			stack_push(&obj->sq2, val);
//			while (!stack_empty(&obj->sq2))
//			{
//				int val = stack_pop(&obj->sq2);
//				stack_push(&obj->sq1, val);
//			}
//			return val;
//		}
//		else
//		{ 
//			while (stack_size(&obj->sq1) > 1)
//			{
//				int val = stack_top(&obj->sq1);
//				stack_pop(&obj->sq1);
//				stack_push(&obj->sq2, val);
//			}
//			int val = stack_top(&obj->sq1);
//			return val;
//		}
//	}
//}
//
//bool myQueueEmpty(MyQueue* obj) {
//	return stack_empty(&obj->sq1) && stack_empty(&obj->sq2);
//}
//
//void myQueueFree(MyQueue* obj) {
//	stack_destroy(&obj->sq1);
//	stack_destroy(&obj->sq2);
//	free(obj);
//}

/**
 * Your MyQueue struct will be instantiated and called as such:
 * MyQueue* obj = myQueueCreate();
 * myQueuePush(obj, x);

 * int param_2 = myQueuePop(obj);

 * int param_3 = myQueuePeek(obj);

 * bool param_4 = myQueueEmpty(obj);

 * myQueueFree(obj);
*/