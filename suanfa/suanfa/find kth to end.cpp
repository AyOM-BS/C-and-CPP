//实现一种算法，找出单向链表中倒数第 k 个节点。返回该节点的值。
//#include<stdio.h>
//#include<stdlib.h>
//struct ListNode {
//    int val;
//    struct ListNode* next;
//};
//int kthToLast(struct ListNode* head, int k)
//{
//	struct ListNode* fast = head;
//	struct ListNode* slow = head;
//	for (int i = 0; i < k; i++)
//	{
//		fast = fast->next;
//	}
//	while (fast != NULL)
//	{
//		fast = fast->next;
//		slow = slow->next;
//	}
//	return slow->val;
//}