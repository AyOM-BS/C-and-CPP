//����һ��ֻ���� (��)��{��}��[��] ���ַ��� s ���ж��ַ����Ƿ���Ч��
//��Ч�ַ��������㣺
//�����ű�������ͬ���͵������űպϡ�
//�����ű�������ȷ��˳��պϡ�
//ÿ�������Ŷ���һ����Ӧ����ͬ���͵������š�
//#include <stdio.h>
//#include <stdlib.h>
// ��һ����ת������Ϊ�����ţ�Ȼ��ʹ��ջ����ƥ��
// 
//char pair(char ch)
//{
//	if (ch == ')')
//		return '(';
//	if (ch == ']')
//		return '[';
//	if (ch == '}')
//		return '{';
//	return 0;
//}
//bool isValid(char* s)
//{
//	int sz = strlen(s);
//	if (sz % 2 == 1) {
//		return false;
//	}
//	char stack[sz+1];
//	int top = 0;
//	for(int i = 0; i < sz; i++)
//	{ 
//		char ch = pair(s[i]);
//		if (top > 0 && ch == stack[top-1])
//		{
//			top--;
//		}
//		else
//		{
//			stack[top] = s[i];
//			top++;
//		}
//	}
//	return top == 0;
//}
// �������ѽ��õ�ջ����ʹ��
//typedef char datatype;
//typedef struct Stack
//{
//	datatype* data;
//	int top;
//	int capacity;
//}SQ;
//void stack_init(SQ* sq)
//{
//	sq->data = NULL;
//	sq->top = 0;
//	sq->capacity = 0;
//}
//void stack_destroy(SQ* sq)
//{
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
//	sq->top++;// top????????????��???top-1??????????
//}
//void stack_pop(SQ* sq)
//{
//	if (sq->top == 0)
//	{
//		printf("Stack is empty, cannot pop\n");
//		return;
//	}
//	sq->top--;
//}
//datatype stack_top(SQ* sq)
//{
//	if (sq->top == 0)
//	{
//		printf("Stack is empty, cannot get top element\n");
//		exit(EXIT_FAILURE);
//	}
//	return sq->data[sq->top - 1];
//}
//bool stack_empty(SQ* sq)
//{
//	return sq->top == 0;
//}
//bool isValid(char* s)
//{
//	SQ sq;
//	stack_init(&sq);
//	while (*s)// ����д��s
//	{
//		if (*s == '(' || *s == '[' || *s == '{')
//		{
//			stack_push(&sq, *s);
//		}
//		else
//		{
//			if(stack_empty(&sq))
//			{
//				stack_destroy(&sq);
//				return false;
//			}
//			char top = stack_top(&sq);
//			// ���while������д��s�����������������ɺ�sָ��'\0'����ʱstack_top(&sq)����ʿ�ջ�����³������
//			if (top == '(' && *s == ')')
//			{
//				stack_pop(&sq);
//			}
//			else if (top == '[' && *s == ']')
//			{
//				stack_pop(&sq);
//			}
//			else if (top == '{' && *s == '}')
//			{
//				stack_pop(&sq);
//			}
//			else
//			{
//				stack_destroy(&sq);
//				return false;
//			}
//		}
//		s++;
//	}
//	if (!stack_empty(&sq))
//	{
//		stack_destroy(&sq);
//		return false;
//	}
//	stack_destroy(&sq);
//	return true;
//}