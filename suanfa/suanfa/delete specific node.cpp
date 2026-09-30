// 给你一个链表的头节点head和一个整数val，请你删除链表中所有满足Node.val == val的节点，并返回新的头节点。
//#include <stdio.h>
//#include <stdlib.h>
//struct ListNode
//{
//	int val;
//	struct ListNode* next;
//};
// 一: 虚拟头节点
//struct ListNode* removeElements(struct ListNode* head, int val)
//{
//	struct ListNode dummy;
//	dummy.next = head;
//	struct ListNode* cur = head;
//	struct ListNode* precur = &dummy;
//	while (cur != NULL)
//	{
//		if (cur->val == val)
//		{
//			precur->next = cur->next;
//			free(cur);
//			cur = precur->next;
//		}
//		else
//		{
//			cur = cur->next;
//			precur = precur->next;
//		}
//	}
//	return dummy.next;
//}
// 二: 单独处理头节点
//struct ListNode* removeElements(struct ListNode* head, int val)
//{
//	struct ListNode* cur = head;
//	struct ListNode* prev = NULL;
//	while (cur)
//	{
//		if(cur->val == val)
//		{
//			if (cur == head)
//			{
//				cur = cur->next;
//				free(head);
//				head = cur;
//			}
//			else
//			{
//				prev->next = cur->next;
//				free(cur);
//				cur = prev->next;
//			}
//		}
//		else
//		{
//			prev = cur;
//			cur = cur->next;
//		}
//	}
//	return head;
//}