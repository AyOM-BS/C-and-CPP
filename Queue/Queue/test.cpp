#include "Queue.h"

int main()
{
	Q q;
	queue_init(&q);
	queue_push(&q, 1);
	queue_push(&q, 2);
	queue_push(&q, 3);
	queue_destroy(&q);
	return 0;
}