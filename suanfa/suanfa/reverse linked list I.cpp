// ���㵥�����ͷ�ڵ�head�����㷴ת����������ط�ת��������
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
	 // ��һ����������ָ�룬�ֱ�ָ��ǰ�ڵ㡢ǰһ���ڵ����һ���ڵ�
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
	 // ������ͷ�巨
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