//����һ�������ͷ�ڵ�head�����������ʼ�뻷�ĵ�һ���ڵ㡣��������޻����򷵻�?null��
//�����������ĳ���ڵ㣬����ͨ����������nextָ���ٴε���������д��ڻ���
//Ϊ�˱�ʾ���������еĻ�������ϵͳ�ڲ�ʹ������ pos ����ʾ����β���ӵ������е�λ�ã������� 0 ��ʼ�������pos��-1�����ڸ�������û�л���
//ע�⣺pos ����Ϊ�������д��ݣ�������Ϊ�˱�ʶ�����ʵ�������
#include <stdio.h>
#include <stdlib.h>
struct ListNode {
    int val;
    struct ListNode* next;
};
// ��һ������ָ�뷨
//struct ListNode* detectCycle(struct ListNode* head)
//{
//    struct ListNode* slow = head;
//    struct ListNode* fast = head;
//    while (fast && fast->next)
//    {
//    	slow = slow->next;
//    	fast = fast->next->next;
//        if (slow == fast)
//        {
//			 //������ָ������ʱ��˵�������д��ڻ�
//			 //������ͷ�ڵ㵽����ڽڵ�ľ���Ϊa
//           //����ڽڵ㵽����ָ��������ľ���Ϊb
//			 //������Ϊc
//			 //����ʱ����ָ���߹��ľ���Ϊa+b+nc����ָ���߹��ľ���Ϊa+b
// 		     //����a+b+nc=2(a+b) => a=nc-b
//			 //a = (n-1)c + c-b
//			 //��ʱ����ָ������ָ��head����ָ�뱣���������㣬����ָ��ÿ�ζ���һ��
//			 //������ָ���ٴ�����ʱ����������ǻ�����ڽڵ�
//			  fast = head;
//            while (fast != slow)
//            {
//				fast = fast->next;
//				slow = slow->next;
//            }
//			return fast;
//        }
//    }
//	return NULL;
//}
//�����������ཻ
//struct ListNode* detectCycle(struct ListNode* head)
//{
//    struct ListNode* slow = head;
//    struct ListNode* fast = head;
//	struct ListNode* curA = head;
//    while (fast && fast->next)
//    {
//        slow = slow->next;
//        fast = fast->next->next;
//        if (slow == fast)
//        {
//			fast = fast->next;
//            struct ListNode* curB = fast;
//            while (curA != curB)
//            {
//				curA = curA != slow ? curA->next : fast;
//                curB = curB != slow ? curB->next : head;
//            }
//			return curA;
//        }
//    }
//	return NULL;
//}