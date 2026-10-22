//����һ�������ͷ�ڵ� head ���ж��������Ƿ��л���
//�����������ĳ���ڵ㣬����ͨ���������� next ָ���ٴε���������д��ڻ���
//Ϊ�˱�ʾ���������еĻ�������ϵͳ�ڲ�ʹ������ pos ����ʾ����β���ӵ������е�λ�ã������� 0 ��ʼ��
//ע�⣺pos ����Ϊ�������д��� ��������Ϊ�˱�ʶ�����ʵ�������
//��������д��ڻ� ���򷵻� true �� ���򣬷��� false ��
//#include <stdio.h>
//#include <stdlib.h>
//struct ListNode {
//    int val;
//    struct ListNode* next��
//};
//bool hasCycle(struct ListNode* head)
//{
//    struct ListNode* slow = head;
//    struct ListNode* fast = head;
//	while (fast && fast->next)
//	{
//		slow = slow->next;
//		fast = fast->next->next;
//		if (slow == fast)
//		{
//			return true;
//		}
//	}
//	return false;
//}