//给你一个非严格递增排列的数组nums，请你原地删除重复出现的元素，使每个元素只出现一次 ，返回删除后数组的新长度。
// 元素的相对顺序应该保持一致。然后返回nums中唯一元素的个数。
//#include <stdio.h>
//
//int main()
//{
//	int arr[] = {0,0,1,1,1,2,2,3,3,4};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int src = 0;
//	int dst = 0;
//	while (src < sz)
//	{ 
//		if (arr[src] == arr[dst])
//		{
//			src++;
//			
//		}
//		else
//		{
//			dst++;
//			arr[dst] = arr[src];
//		}
//	}
//	printf("length: %d\n", dst + 1);
//	return 0;
//}