// 给你单链表的头节点head，请你反转链表，并返回反转后的链表。
//#include <stdio.h>
//#include <stdlib.h>
//
//struct ListNode
//{
//    int val;
//    struct ListNode *next;
//};
//
// struct ListNode* reverseList(struct ListNode* head)
// {
	 // 法一：定义三个指针，分别指向当前节点、前一个节点和下一个节点
	 //if (head == NULL)
		// return NULL;
	 //struct ListNode* prev = NULL;
	 //struct ListNode* cur = head;
	 //struct ListNode* after = cur->next;
	 //while (cur)
	 //{
		// cur->next = prev;
		// prev = cur;
		// cur = after;
		// if(after)
		// after = after->next;
	 //}
	 //return prev;
	 // 法二：头插法
	 //struct ListNode* cur = head;
	 //struct ListNode* newhead = NULL;
	 //while (cur)
	 //{
		// struct ListNode* after = cur->next;
		// cur->next = newhead;
		// newhead = cur;
		// cur = after;
	 //}
	 //return newhead;
 //}