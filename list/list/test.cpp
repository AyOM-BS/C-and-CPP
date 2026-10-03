#include "double list.h"

int main()
{
	SL* sl = NULL;
	list_init(&sl);
	//list_pushback(sl, 1);
	//list_pushback(sl, 2);
	//list_pushback(sl, 3);
	//list_pushback(sl, 4);
	//list_print(sl);
	//list_popback(sl);
	//list_popback(sl);
	//list_popback(sl);
	//list_popback(sl);
	//list_popback(sl);
	//list_print(sl);
	list_pushfront(sl, 5);
	list_pushfront(sl, 6);
	list_print(sl);
	//list_popfront(sl);
	//list_popfront(sl);
	//list_popfront(sl);
	//list_print(sl);
	//list_insert(sl, 1, 7);
	//list_insert(sl, 5, 8);
	//list_print(sl);
	//list_erase(sl, 5);
	//list_erase(sl, 4);
	//list_print(sl);
	list_destroy(&sl);
	return 0;
}