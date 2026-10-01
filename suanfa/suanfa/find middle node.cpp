//给你单链表的头结点 head ，请你找出并返回链表的中间结点。
//如果有两个中间结点，则返回第二个中间结点。
//#include<stdio.h>
//#include<stdlib.h>
//struct ListNode {
//    int val;
//    struct ListNode* next;
//};
//struct ListNode* middleNode(struct ListNode* head)
//{
//	struct ListNode* middle = head;
//	struct ListNode* end = head;
//	while (end != NULL && end->next != NULL)
//	{
//		end = end->next->next;
//		middle = middle->next;
//	}
//	return middle;
//}