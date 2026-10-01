//给你单链表的头指针head和两个整数left和right，其中left <= right。请你反转从位置left到位置right的链表节点，返回反转后的链表 。
//#include <stdio.h>
//#include <stdlib.h>
//struct ListNode {
//	int val;
//	struct ListNode* next;
//	
//};
//struct ListNode* reverseBetween(struct ListNode* head, int left, int right)
//{
//	if (head == NULL || head->next == NULL)
//	{
//		return head;
//	}
//	struct ListNode dummy;
//	dummy.next = head;
//	struct ListNode* prev = &dummy;
//	for (int i = 1; i < left; i++)
//	{
//		prev = prev->next;
//	}
//	struct ListNode* cur = prev->next;
//	struct ListNode* end = cur;
//	for (int i = left; i <= right; i++)
//	{
//		end = end->next;
//	}
//	struct ListNode* curnext = end;
//	while (cur != end)
//	{
//		struct ListNode* next = cur->next;
//		cur->next = curnext;
//		curnext = cur;
//		cur = next;
//	}
//	prev->next = curnext;
//	return dummy.next;
//}
//struct ListNode* reverseBetween(struct ListNode* head, int left, int right)
//{
//	if (head == NULL || head->next == NULL)
//	{
//		return head;
//	}
//	struct ListNode dummy;
//	dummy.next = head;
//	struct ListNode* prev = &dummy;
//	for (int i = 1; i < left; i++)
//	{
//		prev = prev->next;
//	}
//	struct ListNode* cur = prev->next;
//	struct ListNode* end = cur;
//	for (int i = 1; i <= right; i++)
//	{
//		end = end->next;
//	}
//	struct ListNode* next = cur->next;
//	cur->next = end->next;
//	while (cur != end)
//	{
//		struct ListNode* nnext = next->next;
//		next->next = cur;
//		cur = next;
//		next = nnext;
//	}
//	prev->next = cur;
//	return dummy.next;
//}