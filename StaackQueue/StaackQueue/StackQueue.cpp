#include "StackQueue.h"

void stack_init(SQ* sq)
{
	assert(sq);
	sq->data = NULL;
	sq->top = 0;
	sq->capacity = 0;
}
void stack_destroy(SQ* sq)
{ 
	assert(sq);
	if (sq->data)
	{
		free(sq->data);
		sq->data = NULL;
	}
	sq->top = 0;
	sq->capacity = 0;
}
void stack_push(SQ* sq, datatype val)
{
	assert(sq);
	if (sq->top == sq->capacity)
	{
		int newcapacity = sq->capacity ? sq->capacity * 2 : 4;
		datatype* newdata = (datatype*)realloc(sq->data, newcapacity * sizeof(datatype));
		if (newdata == NULL)
		{
			perror("realloc failed");
			exit(EXIT_FAILURE);
		}
		sq->capacity = newcapacity;
		sq->data = newdata;
	}
	sq->data[sq->top] = val;
	sq->top++;// top指的是下一个空位置，top-1才是栈顶元素
}
void stack_pop(SQ* sq)
{ 
	assert(sq);
	if(sq->top == 0)
	{ 
		printf("Stack is empty, cannot pop\n");
		return;
	}
	sq->top--;
}
datatype stack_top(SQ* sq)
{
	assert(sq);
	if(sq->top == 0)
	{
		printf("Stack is empty, cannot get top element\n");
		exit(EXIT_FAILURE);
	}
	return sq->data[sq->top - 1];
}
int stack_size(SQ* sq)
{
	assert(sq);
	return sq->top;
}
bool stack_empty(SQ* sq)
{
	assert(sq);
	//if (sq->top > 0)
	//{
	//	return false;
	//}
	//else
	//{
	//	return true;
	//}
	return sq->top == 0;//逻辑语言代表真假
}