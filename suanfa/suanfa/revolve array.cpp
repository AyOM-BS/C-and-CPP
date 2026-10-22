//����һ���������� nums���������е�Ԫ��������ת k ��λ�ã����� k �ǷǸ�����
//�����ʹ�ÿռ临�Ӷ�Ϊ O(1) �� ԭ�� �㷨������������
//#define _CRT_SECURE_NO_WARNINGS

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
//	k = k % 7; // 处理 k 大于数组长度的情�?
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