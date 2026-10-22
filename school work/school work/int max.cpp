//��int���͵����ֵ 2147483647
//#include <stdio.h>

//λ����1
//int main()
//{
//	int max = 1;
//	while (max << 1 > 0)
//	{
//		max = max << 1;
//	}
//	max = (max << 1) - 1;
//	printf("int���͵����ֵ��: %d\n", max);
//	return 0;
//}

//λ����2
//int main()
//{
//	unsigned int max = -1;
//	printf("int���͵����ֵ��: %d\n", max >> 1);
//	return 0;
//}

//sizeof�����λ����
//int main()
//{
//	int max = 0;
//	int size = sizeof(int);
//	max = (1 << (size * 8 - 1)) - 1;
//	printf("int���͵����ֵ��: %d\n", max);
//	return 0;
//}