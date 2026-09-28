#include "seqList.h"

void testseqlist()
{
	SL sl;
	seqlist_init(&sl);
	seqlist_pushback(&sl, 1);
	seqlist_pushback(&sl, 2);
	seqlist_pushback(&sl, 3);
	seqlist_pushback(&sl, 4);
	seqlist_pushback(&sl, 5);
	print(&sl);
	//seqlist_popback(&sl);
	//seqlist_popback(&sl);
	//seqlist_popback(&sl);
	//seqlist_popback(&sl);
	//seqlist_popback(&sl);
	//seqlist_popback(&sl);
	//print(&sl);
	//seqlist_pushback(&sl, 10);
	//seqlist_pushback(&sl, 20);
	//print(&sl);
	//seqlist_pushfront(&sl, 30);
	//print(&sl);
	//seqlist_popfront(&sl);
	//print(&sl);
	//seqlist_find(&sl, 3);
	//seqlist_insert(&sl, 2, 100);
	//print(&sl);
	//seqlist_erase(&sl, 2);
	//print(&sl);
	seqlist_destroy(&sl);
}
int main()
{
	testseqlist();
	return 0;
}