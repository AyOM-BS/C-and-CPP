//����һ������Ϊ n �������ÿ���ڵ����һ���������ӵ����ָ�� random ����ָ�����ָ�������е��κνڵ��սڵ㡣
//������������ ����� ���Ӧ�������� n �� ȫ�� �ڵ���ɣ�����ÿ���½ڵ��ֵ����Ϊ���Ӧ��ԭ�ڵ��ֵ���½ڵ�� next ָ��� random ָ��Ҳ��Ӧָ���������е��½ڵ㣬��ʹԭ����͸��������е���Щָ���ܹ���ʾ��ͬ������״̬�����������е�ָ�붼��Ӧָ��ԭ�����еĽڵ� ��
//���磬���ԭ�������� X �� Y �����ڵ㣬���� X.random-- > Y ����ô�ڸ��������ж�Ӧ�������ڵ� x �� y ��ͬ���� x.random-- > y ��
//���ظ��������ͷ�ڵ㡣
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
//	//��ԭ�����ÿ���ڵ���洴��һ���½ڵ�
//	while (cur)
//	{
//		struct Node* copy = (struct Node*)malloc(sizeof(struct Node));
//		copy->val = cur->val;
//		copy->next = cur->next;
//		cur->next = copy;
//		cur = copy->next;
//	}
//	//�����½ڵ��randomָ��
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
//	// ������������
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