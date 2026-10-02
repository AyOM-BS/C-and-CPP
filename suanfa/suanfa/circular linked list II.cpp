//给定一个链表的头节点head，返回链表开始入环的第一个节点。如果链表无环，则返回?null。
//如果链表中有某个节点，可以通过连续跟踪next指针再次到达，则链表中存在环。
//为了表示给定链表中的环，评测系统内部使用整数 pos 来表示链表尾连接到链表中的位置（索引从 0 开始）。如果pos是-1，则在该链表中没有环。
//注意：pos 不作为参数进行传递，仅仅是为了标识链表的实际情况。
#include <stdio.h>
#include <stdlib.h>
struct ListNode {
    int val;
    struct ListNode* next;
};
// 法一：快慢指针法
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
//			 //当快慢指针相遇时，说明链表中存在环
//			 //设链表头节点到环入口节点的距离为a
//           //环入口节点到快慢指针相遇点的距离为b
//			 //环长度为c
//			 //相遇时，快指针走过的距离为a+b+nc，慢指针走过的距离为a+b
// 		     //所以a+b+nc=2(a+b) => a=nc-b
//			 //a = (n-1)c + c-b
//			 //这时将快指针重新指向head，慢指针保持在相遇点，快慢指针每次都走一步
//			 //当快慢指针再次相遇时，相遇点就是环的入口节点
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
//法二：链表相交
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