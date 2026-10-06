//dd在玩数字游戏，首先他拿到一个x
//当x不为零时进行如下操作
//如果二进制x中有奇数个1，则x二进制形式下最低位取反（即0变成1,1变成0）
//如果二进制x中有偶数个1，则x二进制形式下非前导零最高位取反
//询问对于一个x，操作几次后变为零
//#include <iostream>
//#include <cstdio>
//#include <string>
//#include <cstring>
//using namespace std;
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n;i++)
//	{
//		int num = 0;
//		scanf("%d", &num);
//		if(!num)
//		{
//			printf("0\n");
//			continue;
//		}
//		else
//		{
//			int count = 0;
//			while (num)
//			{
//				int onenum = 0;
//				int num1 = num;
//				int pow = 0;
//				while (num1)
//				{
//					if (num1 % 2 == 0)
//					{
//						num1 >>= 1;
//					}
//					else
//					{
//						num1 >>= 1;
//						onenum++;
//					}
//					pow++;
//				}
//				if (onenum % 2 == 0)
//				{
//					num ^= (1 << (pow - 1));
//				}
//				else
//				{
//					num ^= 1;
//				}
//				count++;
//			}
//			printf("%d\n", count);
//		}
//	}
//	return 0;
//}