//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char choose;
//	do
//	{
//		float data1, data2;
//		char op;
//		int get = scanf("%f %c %f", &data1, &op, &data2);
//		if (get == 3)
//		{
//			if (op == '+')
//			{
//				printf("%.2f + %.2f = %.2f\n", data1, data2, data1 + data2);
//			}
//			else if (op == '-')
//			{
//				printf("%.2f - %.2f = %.2f\n", data1, data2, data1 - data2);
//			}
//			else if (op == '*')
//			{
//				printf("%.2f * %.2f = %.2f\n", data1, data2, data1 * data2);
//			}
//			else if (op == '/')
//			{
//				if (data2)
//					printf("%.2f / %.2f = %.2f\n", data1, data2, data1 / data2);
//				else
//					printf("error\n");
//			}
//			else
//			{
//				printf("error\n");
//			}
//		}
//		else
//			printf("error\n");
//		while (getchar() != '\n');
//		scanf("%c", &choose);
//	} while (choose == 'y' || choose == 'Y');
//	return 0;
//}