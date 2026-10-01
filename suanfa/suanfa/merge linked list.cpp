// 将两个升序链表合并为一个新的升序链表并返回。
// 新链表是通过拼接给定的两个链表的所有节点组成的。
//#include <stdio.h>
//#include <stdlib.h>
//struct ListNode {
//    int val;
//    struct ListNode* next;
//};
//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
//{
//    struct ListNode dummy;
//	struct ListNode* head = &dummy;
//	dummy.next = NULL;
//	while (list1 != NULL && list2 != NULL)
//    {
//		if (list1->val < list2->val)
//		{
//			head->next = list1;
//			list1 = list1->next;
//		}
//		else
//		{
//			head->next = list2;
//			list2 = list2->next;
//	    }
//		head = head->next;
//    }
//    if(list1)
//		head->next = list1;
//	  else
//		head->next = list2;
//	return dummy.next;
//}