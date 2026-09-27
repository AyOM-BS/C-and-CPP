#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int find(char arr[24][24], int x1, int y1, int n, int m, int* sum)
{
	if (n == x1 && m == y1)
	{
		(*sum)++;
	}
	if (n > 21 || m > 21)
	{
		return 0;
	}
	if (arr[n + 1][m] == '1' && arr[n][m + 1] == '1' || arr[n][m] == '1')
	{
		return 0;
	}
	else if (arr[n + 1][m] == '1' && arr[n][m + 1] == '0')
	{
		find(arr, x1, y1, n, m+1, sum);
	}
	else if (arr[n + 1][m] == '0' && arr[n][m + 1] == '1')
	{
		find(arr, x1, y1, n+1, m, sum);
	}
	else
	{
		find(arr, x1, y1, n + 1, m, sum);
		find(arr, x1, y1, n, m + 1, sum);
	}
	return *sum;
}
int main()
{
	char arr[24][24];
	for (int i = 0; i < 24; i++)
	{
		for (int j = 0; j < 24; j++)
		{
			arr[i][j] = '0';
		}
	}
	int n=2, m=2;
	int n1, m1, n2, m2;
	scanf("%d %d %d %d", &n1, &m1, &n2, &m2);
	int x1 = n1 + 2;
	int y1 = m1 + 2;
	int x2 = n2 + 2;
	int y2 = m2 + 2;
	arr[x2 - 2][y2 - 1] = '1';
	arr[x2 - 2][y2 + 1] = '1';
	arr[x2 - 1][y2 - 2] = '1';
	arr[x2 - 1][y2 + 2] = '1';
	arr[x2][y2] = '1';
	arr[x2 + 2][y2 - 1] = '1';
	arr[x2 + 2][y2 + 1] = '1';
	arr[x2 + 1][y2 - 2] = '1';
	arr[x2 + 1][y2 + 2] = '1';
	int sum = 0;
	sum = find(arr, x1, y1, n, m, &sum);
	printf("%d", sum);
	return 0;
}