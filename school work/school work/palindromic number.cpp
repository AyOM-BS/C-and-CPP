//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//
//int loop(int i)
//{
//	int temp = i, target = i;
//	int count = 0;
//	while (temp)
//	{
//		temp /= 10;
//		count++;
//	}
//	while (i)
//	{
//		temp += i % 10 * (int)pow(10, count - 1);
//		count--;
//		i /= 10;
//	}
//	if (temp == target)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int a, b;
//	int judge;
//	scanf("%d%d", &a, &b);
//	for (int i = a; i <= b; i++)
//	{
//		judge = loop(i);
//		if (judge == 1)
//			printf("%d\n", i);
//	}
//}