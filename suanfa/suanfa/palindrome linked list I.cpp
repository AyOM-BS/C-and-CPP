//给定一个链表，请判断该链表是否为回文结构。
//回文是指该字符串正序逆序完全一致。

//#include <stdio.h>
//#include <stdlib.h>
//struct ListNode {
//    int val;
//    struct ListNode* next;
//    
//};
//bool isPail(struct ListNode* head) 
//{
//	if (head == NULL)
//	{
//		return true;
//	}
//    struct ListNode* fast = head;
//    struct ListNode* slow = head;
//	while (fast && fast->next)
//	{
//		fast = fast->next->next;
//		slow = slow->next;
//	}
//    struct ListNode* cur = slow;
//	struct ListNode* newhead = NULL;
//    while (cur)
//    {
//		struct ListNode* next = cur->next;
//        cur->next = newhead;
//		newhead = cur;
//		cur = next;
//    }
//    while (head->val == newhead->val && head != slow)
//    {
//		head = head->next;
//		newhead = newhead->next;
//    }
//    if (head == slow)
//    {
//		return true;
//
//	}
//	else
//	{
//		return false;
//	}
//}