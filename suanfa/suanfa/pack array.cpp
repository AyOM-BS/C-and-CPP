//给你两个按非递减顺序排列的整数数组nums1和nums2，另有两个整数m和n，分别表示nums1和nums2中的元素数目。
//请你合并nums2到nums1中，使合并后的数组同样按非递减顺序排列。
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