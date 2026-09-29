//给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素。
//元素的顺序可能发生改变。然后返回 nums 中与 val 不同的元素的数量。
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int arr[8] = { 0,1,2,2,3,0,4,2 };
//	int val = 0;
//	scanf("%d", &val);
//	int src = 0;
//	int dst = 0;
//	while (src < 8)
//	{
//		if(arr[src] != val)
//		{
//			src++;
//			dst++;
//		}
//		else
//		{
//			src++;
//			if (arr[src] != val)
//			{
//				arr[dst] = arr[src];
//				src++;
//				dst++;
//			}
//		}
//	}
//	int k = dst-1;
//	printf("%d\n", k);
//	return 0;
//}