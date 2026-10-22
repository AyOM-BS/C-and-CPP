//���������������ͷ�ڵ� headA �� headB �������ҳ������������������ཻ����ʼ�ڵ㡣
// �����������������ཻ�ڵ㣬���� null ��
//#include <stdio.h>
//#include <stdlib.h>
//
//struct ListNode {
//    int val;
//    struct ListNode* next;
//};
//��һ���������������������ĳ�����ͬ��Ȼ��ͬʱ�������ҵ��ཻ��
//struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB)
//{
//	struct ListNode* tailA = headA;
//    struct ListNode* tailB = headB;
//	int a = 1;
//	int b = 1;
//	while (tailA->next)
//	{
//		tailA = tailA->next;
//		a++;
//	}
//	while (tailB->next)
//	{
//		tailB = tailB->next;
//		b++;
//	}
//	if (tailA != tailB)
//	{
//		return NULL;
//	}
//	int k = abs(a - b);
//	struct ListNode* longlist = headB;
//	struct ListNode* shortlist = headA;
//	if (a < b)
//	{
//		longlist = headB;
//		shortlist = headA;
//	}
//	else
//	{
//		longlist = headA;
//		shortlist = headB;
//	}
//	for (int i = 0; i < k; i++)
//	{
//		longlist = longlist->next;
//	}
//	while (longlist != shortlist)
//	{
//		longlist = longlist->next;
//		shortlist = shortlist->next;
//	}
//	return longlist;
//}
// ������˫ָ�뷨������ָ��ֱ�����������������������β��ʱ��ָ��ָ����һ�������ͷ�ڵ㣬��������ָ������ཻ������
//struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB)
//{
//	struct ListNode* curA = headA;
//	struct ListNode* curB = headB;
//	while (curA != curB)
//	{
//		curA = curA ? curA->next : headB;
//		curB = curB ? curB->next : headA;
//	}
//	return curA;
//}