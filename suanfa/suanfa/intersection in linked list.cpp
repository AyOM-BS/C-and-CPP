//给你两个单链表的头节点 headA 和 headB ，请你找出并返回两个单链表相交的起始节点。
// 如果两个链表不存在相交节点，返回 null 。
//#include <stdio.h>
//#include <stdlib.h>
//
//struct ListNode {
//    int val;
//    struct ListNode* next;
//};
//法一：遍历链表，让两个链表的长度相同，然后同时遍历，找到相交点
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
// 法二：双指针法，两个指针分别遍历两个链表，当到达链表尾部时，指针指向另一个链表的头节点，这样两个指针会在相交点相遇
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