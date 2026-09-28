//#define _CRT_SECURE_NO_WARNINGS

//给定一个整数数组 nums，将数组中的元素向右轮转 k 个位置，其中 k 是非负数。
//你可以使用空间复杂度为 O(1) 的 原地 算法解决这个问题吗？
//#include <stdio.h>
//approach 1
//int main()
//{
//	int arr[7] = { 1, 2, 3, 4, 5, 6, 7 };
//	int temp[7];
//	int k = 3;
//	for (int i = 0; i < 7; i++)
//	{
//		if (i < k)
//			temp[i] = arr[7 - k + i];
//		else
//			temp[i] = arr[i - 3];
//	}
//	for (int i = 0; i < 7; i++)
//	{
//		printf("%d ", temp[i]);
//	}
//	return 0;
//}
//approach 2
//void reverse(int* p, int left, int right)
//{
//	while (left < right)
//	{
//		int a = *(p + left);
//		*(p + left) = *(p + right);
//		*(p + right) = a;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int k = 0;
//	scanf("%d", &k);
//	k = k % 7; // 处理 k 大于数组长度的情况
//	int arr[7] = { 1, 2, 3, 4, 5, 6, 7 };
//	reverse(&arr[0], 0, 7 - k - 1);
//	reverse(&arr[0], 7 - k, 6);
//	reverse(&arr[0], 0, 6);
//	for (int i = 0; i < 7; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}