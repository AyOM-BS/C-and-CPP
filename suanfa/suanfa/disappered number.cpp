//消失的数字
//数组nums包含从0到n的所有整数，但其中缺了一个。
//请编写代码找出那个缺失的整数。你有办法在O(n)时间内完成吗？
//#include <stdio.h>
//approach 1
//int main()
//{
//	int arr[5] = { 1,0,4,3,5 };
//	int arr1[6] = { 0 };
//	for (int i = 0; i < 5; i++)
//	{
//		arr1[arr[i]] = arr[i];
//	}
//	for (int i = 1; i < 6; i++)
//	{
//		if (arr1[i] == 0)
//		{
//			int p = printf("%d\n", i);
//			break;
//		}
//	}
//	if (p == 0)
//	{
//		printf("0\n");
//	}
//	return 0;
//}
//approach 2
//int main()
//{
//	int arr[5] = { 1,0,4,3,5 };
//	int sum = 0;
//	for (int i = 1; i <= 5; i++)
//	{
//		sum += i;
//	}
//	for (int i = 0; i < 5;i++)
//	{
//		sum -= arr[i];
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//approach 3
//a^a = 0
//a^0 = a
//a^b = b^a
//int main()
//{
//	int arr[5] = { 1,0,4,3,5 };
//	int n = 0;
//	for (int i = 0; i < 6; i++)
//	{
//		n ^= i;
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		n ^= arr[i];
//	}
//	printf("%d\n", n);
//	return 0;
//}