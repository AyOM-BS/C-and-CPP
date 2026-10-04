#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int datatype;
typedef struct Stack
{
	datatype* data;
	int top;
	int capacity;
}SQ;

void stack_init(SQ* sq);
void stack_destroy(SQ* sq);
void stack_push(SQ* sq, datatype val);
void stack_pop(SQ* sq);
datatype stack_top(SQ* sq);
int stack_size(SQ* sq);
bool stack_empty(SQ* sq);