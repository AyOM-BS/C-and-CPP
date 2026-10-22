// ����һ�������ͷ�ڵ�head��һ������val������ɾ����������������Node.val == val�Ľڵ㣬�������µ�ͷ�ڵ㡣
//#include <stdio.h>
//#include <stdlib.h>
//struct ListNode
//{
//	int val;
//	struct ListNode* next;
//};
// һ: ����ͷ�ڵ�
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
// ��: ��������ͷ�ڵ�
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