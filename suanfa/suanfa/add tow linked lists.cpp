//�������� �ǿ� ���������ʾ�����Ǹ�������������ÿλ���ֶ��ǰ��� ���� �ķ�ʽ�洢�ģ�����ÿ���ڵ�ֻ�ܴ洢 һλ ���֡�
//���㽫��������ӣ�������ͬ��ʽ����һ����ʾ�͵������
//����Լ���������� 0 ֮�⣬���������������� 0 ��ͷ��
//#include <stdio.h>
//#include <stdlib.h>
//
//struct ListNode
//{
//     int val;
//     struct ListNode *next;
//};
//struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
//{
//    struct ListNode* head = NULL, * tail = NULL;
//    int carry = 0;
//    int sum = 0;
//    while (l1 || l2) {
//        int a = l1 ? l1->val : 0;
//        int b = l2 ? l2->val : 0;
//        sum = a + b + carry;
//        carry = sum / 10;
//        if (!head) {
//            head = tail = malloc(sizeof(struct ListNode));
//            tail->next = NULL;
//            tail->val = sum % 10;
//        }
//        else {
//            tail->next = malloc(sizeof(struct ListNode));
//            tail = tail->next;
//            tail->val = sum % 10;
//            tail->next = NULL;
//        }
//        if (l1)
//            l1 = l1->next;
//        if (l2)
//            l2 = l2->next;
//    }
//    if (carry > 0) {
//        tail->next = malloc(sizeof(struct ListNode));
//        tail = tail->next;
//        tail->val = carry;
//        tail->next = NULL;
//    }
//    return head;
//}