#include "seqList.h"
void seqlist_init(SL* ps)
{
	ps->p = NULL;
	ps->size = 0;
	ps->capacity = 0;
}
void seqlist_pushback(SL* ps, dataType n)
{
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		dataType* newp = (dataType*)realloc(ps->p, sizeof(dataType) * newcapacity);
		if (newp == NULL)
		{
			printf("realloc fail\n");
			return;
		}
		ps->p = newp;
		ps->capacity = newcapacity;
	}
	ps->p[ps->size] = n;// 或者*(ps->p + ps->size) = n;
	ps->size++;
}
void seqlist_popback(SL* ps)
{
	if(ps->size > 0)
	ps->size--;
}
void print(SL* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->p[i]);
	}
	printf("\n");
}
void seqlist_pushfront(SL* ps, dataType n)
{
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		dataType* newp = (dataType*)realloc(ps->p, sizeof(dataType) * newcapacity);
		if (newp == NULL)
		{
			printf("realloc fail\n");
			return;
		}
		ps->p = newp;
		ps->capacity = newcapacity;
	}
	int end = ps->size-1;
	while (end >= 0)
	{
		ps->p[end + 1] = ps->p[end];
		end--;
	}
	ps->p[0] = n;
	ps->size++;	
}
void seqlist_popfront(SL* ps)
{
	if(ps->size > 0)
	{
		int begin = 0;
		while (begin < ps->size - 1)
		{
			ps->p[begin] = ps->p[begin + 1];
			begin++;
		}
		ps->size--;
	}
}
int seqlist_find(SL* ps, int n)
{
	int flag = 0;
	for (int i = 0; i < ps->size - 1; i++)
	{
		if (ps->p[i] == n)
		{
			printf("find %d,subscript is %d\n", n, i);
			flag = 1;
		}
	}
	if (flag == 0)
	printf("not find %d\n", n);
	return 0;
}
void seqlist_insert(SL* ps, int pos, dataType n)
{
	if (pos < 0 || pos > ps->size)
	{
		printf("pos is error\n");
		return;
	}
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		dataType* newp = (dataType*)realloc(ps->p, sizeof(dataType) * newcapacity);
		if (newp == NULL)
		{
			printf("realloc fail\n");
			return;
		}
		ps->p = newp;
		ps->capacity = newcapacity;
	}
	for (int end = ps->size - 1; end >= pos; end--)
	{
		ps->p[end + 1] = ps->p[end];
	}
	ps->p[pos] = n;
	ps->size++;
}
void seqlist_erase(SL* ps, int pos)
{
	if (pos < 0 || pos > ps->size)
	{
		printf("pos is error\n");
		return;
	}
	if (ps->size > 0)
	{
		for (int insert = pos; insert < ps->size - 1; insert++)
		{
			ps->p[insert] = ps->p[insert + 1];
		}
		ps->size--;
	}
}
void seqlist_destroy(SL* ps)
{
	free(ps->p);
	ps->p = NULL;
}