//�����������ǵݼ�˳�����е���������nums1��nums2��������������m��n���ֱ��ʾnums1��nums2�е�Ԫ����Ŀ��
//����ϲ�nums2��nums1�У�ʹ�ϲ��������ͬ�����ǵݼ�˳�����С�
//int main()
//{
//	int m = 3, n = 3;
//	int nums1[m+n] = { 1, 2, 3, 0, 0, 0 };
//	int nums2[n] = { 2, 5, 6 };
//	int src1 = m-1, src2 = n-1, dest = m+n-1;
//	while(src2 >= 0 && src1 >= 0)
//	{ 
//		if (nums2[src2] > nums1[src1])
//		{
//			nums1[dest] = nums2[src2];
//			dest--;
//			src2--;
//		}
//		else
//		{
//			nums1[dest] = nums1[src1];
//			dest--;
//			src1--;
//		}
//	}
//	while (src2 >= 0)
//	{
//		nums1[dest] = nums2[src2];
//		dest--;
//		src2--;
//	}
//	return 0;
//}