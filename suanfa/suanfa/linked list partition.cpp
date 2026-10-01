//给你一个链表的头节点 head 和一个特定值 x ，请你对链表进行分隔，使得所有 小于 x 的节点都出现在 大于或等于 x 的节点之前。
//你不需要?保留?每个分区中各节点的初始相对位置。
//#include <stdio.h>
//#include <stdlib.h>
//struct ListNode {
//    int val;
//    struct ListNode* next;
//};
//struct ListNode* partition(struct ListNode* head, int x)
//{
//    struct ListNode small;
//    struct ListNode large;
//	struct ListNode* smalltail = &small;
//    struct ListNode* largetail = &large;
//    while (head)
//    {
//        if (head->val < x)
//        {
//            smalltail->next = head;
//			head = head->next;
//			smalltail = smalltail->next;
//        }
//        else
//        {
//			largetail->next = head;
//			head = head->next;
//			largetail = largetail->next;
//        }
//    }
//	smalltail->next = large.next;
//	largetail->next = NULL;
//	return small.next;
//}