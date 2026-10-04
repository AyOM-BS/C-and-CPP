//给你两个 非空 的链表，表示两个非负的整数。它们每位数字都是按照 逆序 的方式存储的，并且每个节点只能存储 一位 数字。
//请你将两个数相加，并以相同形式返回一个表示和的链表。
//你可以假设除了数字 0 之外，这两个数都不会以 0 开头。
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