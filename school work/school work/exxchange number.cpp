////��������������ʽ�θ�8λ�����8λ����
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	unsigned int number = 0;
//	scanf("%u", &number);
//	unsigned int zero = (1 << 8) - 1;//0x 00 00 00 ff
//	unsigned int low = number & zero;//0x 00 00 00 tt
//	number &= ~zero;//number & 0xff ff ff 00 = 0x ?? ?? ?? 00 = number
//	unsigned int high = number >> 8;// 0x 00 ?? ?? TT
//	high &= zero;//0x 00 00 00 TT
//	zero = zero << 8;// 0x 00 00 ff 00
//	number &= ~zero;//number & 0xff ff 00 ff = 0x ?? ?? 00 00 = number
//	number |= high;//0x ?? ?? 00 TT
//	number |= low << 8;//0x ?? ?? tt TT
//	printf("%u\n", number);
//	return 0;
//}