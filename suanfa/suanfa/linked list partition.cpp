//����һ�������ͷ�ڵ� head ��һ���ض�ֵ x �������������зָ��ʹ������ С�� x �Ľڵ㶼������ ���ڻ���� x �Ľڵ�֮ǰ��
//�㲻��Ҫ?����?ÿ�������и��ڵ�ĳ�ʼ���λ�á�
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