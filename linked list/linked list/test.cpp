#include "slist.h"

int main()
{
	//SL sl;
	//slist_init(&sl);
	//slist_print(&sl);
	SL* sl = NULL;
	slist_pushback(&sl, 3);
	slist_pushback(&sl, 4);
	slist_pushback(&sl, 6);
	slist_pushback(&sl, 8);
	slist_pushfront(&sl, 2);
	//slist_popback(&sl);
	//slist_popback(&sl);
	//slist_popback(&sl);
	//slist_popback(&sl);
	//slist_popback(&sl);
	slist_print(sl);
	slist_popfront(&sl);
	slist_print(sl);
	destroy(sl);
	return 0;
}