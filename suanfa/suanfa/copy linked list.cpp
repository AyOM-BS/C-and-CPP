//给你一个长度为 n 的链表，每个节点包含一个额外增加的随机指针 random ，该指针可以指向链表中的任何节点或空节点。
//构造这个链表的 深拷贝。 深拷贝应该正好由 n 个 全新 节点组成，其中每个新节点的值都设为其对应的原节点的值。新节点的 next 指针和 random 指针也都应指向复制链表中的新节点，并使原链表和复制链表中的这些指针能够表示相同的链表状态。复制链表中的指针都不应指向原链表中的节点 。
//例如，如果原链表中有 X 和 Y 两个节点，其中 X.random-- > Y 。那么在复制链表中对应的两个节点 x 和 y ，同样有 x.random-- > y 。
//返回复制链表的头节点。
//#include <stdio.h>
//#include <stdlib.h>
//
//struct Node {
//	int val;
//	struct Node* next;
//	struct Node* random;
//};
//struct Node* copyRandomList(struct Node* head)
//{
//	if (!head)
//	{
//		return NULL;
//	}
//	struct Node* cur = head;
//	//在原链表的每个节点后面创建一个新节点
//	while (cur)
//	{
//		struct Node* copy = (struct Node*)malloc(sizeof(struct Node));
//		copy->val = cur->val;
//		copy->next = cur->next;
//		cur->next = copy;
//		cur = copy->next;
//	}
//	//设置新节点的random指针
//	cur = head;
//	while (cur)
//	{
//		struct Node* copy = cur->next;
//		if (cur->random == NULL)
//		{
//			copy->random = NULL;
//		}
//		else
//		{ 
//			copy->random = cur->random->next;
//		}
//		cur = copy->next;
//	}
//	// 分离两个链表
//	cur = head;
//	struct Node* copyhead = head->next;
//	while(cur)
//	{
//		struct Node* copy = cur->next;
//		cur->next = copy->next;
//		cur = cur->next;
//		if (cur)
//		{
//			copy->next = cur->next;
//		}
//		else
//		{
//			copy->next = NULL;
//		}
//	}
//	return copyhead;
//}