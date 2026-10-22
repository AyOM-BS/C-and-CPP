//�������������еĽڵ�ÿ k ��һ�鷭ת�����ط�ת�������
//��������еĽڵ������� k �ı����������ʣ�µĽڵ㱣��ԭ��
//�㲻�ܸ��Ľڵ��е�ֵ��ֻ�ܸ��Ľڵ㱾���
//#include <stdio.h>
//#include <stdlib.h>
//struct ListNode {
//	int val;
//	struct ListNode* next;
//};
//struct ListNode* reverseKGroup(struct ListNode* head, int k) {
//	struct ListNode* tail = head;
//	for (int i = 0; i < k; i++)
//	{
//		if (tail == NULL)
//		{
//			return head;
//		}
//		tail = tail->next;
//	}
//	struct ListNode* curr = head;
//	struct ListNode* prev = NULL;
//	while (curr != tail)
//	{
//		struct ListNode* next = curr->next;
//		curr->next = prev;
//		prev = curr;
//		curr = next;
//	}
//	head->next = reverseKGroup(tail, k);
//	return prev;
//}