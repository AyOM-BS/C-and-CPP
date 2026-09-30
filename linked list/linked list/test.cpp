#include "slist.h"

int main()
{
	//SL sl;
	//slist_init(&sl);
	//slist_print(&sl);
	SL* sl = NULL;
	slist_pushback(&sl, 1);
	slist_pushback(&sl, 2);
	slist_pushback(&sl, 3);
	slist_pushback(&sl, 4);
	//slist_pushfront(&sl, 5);
	//slist_popback(&sl);
	//slist_popback(&sl);
	//slist_popback(&sl);
	//slist_popback(&sl);
	//slist_popback(&sl);
	slist_print(sl);
	//slist_popfront(&sl);
	//slist_print(sl);
	//slist_insertfront(&sl, 3, 5);
	//slist_insertfront(&sl, 1, 6);
	//slist_insertafter(&sl, 1, 5);
	//slist_insertafter(&sl, 4, 6);
	//slist_print(sl);
	slist_erase(&sl, 1);
	slist_print(sl);
	slist_destroy(&sl);
	return 0;
}