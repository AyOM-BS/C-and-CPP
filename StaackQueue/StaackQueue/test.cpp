#include "StackQueue.h"

int main()
{
	SQ sq;
	stack_init(&sq);
	stack_push(&sq, 1);
	stack_push(&sq, 2);
	stack_push(&sq, 3);
	stack_push(&sq, 4);
	return 0;
}