#include <iostream>
#include <stack> 
#include <cmath>
#include "solution.h"

using namespace std;

ListNode* Solution::swapPairs(ListNode* head) {
	if (head == nullptr||head->next==nullptr) {
		return head;
	}
	ListNode* first= head;
	ListNode* second = head->next;
	//��������Ϊ�����ڵ�
	//������firstָ��ڶ����ڵ㣬secondָ���һ���ڵ�
	first->next = head->next->next;
	second->next = first;
	//ʹhead����ָ���һ���ڵ�
	head = second;
	//����ݹ鷵����һ�������ͷ���
	//����ʱ�������߼��������ڣ������Դ�Ϊǰ�ṹ�������߼�
	//�����Դ�Ϊǰ������������������践��ͷ�ڵ��ʹ�����������Ӽ�
	//ʹ��ǰ������ݹ�������
	head->next->next=swapPairs(first->next);
	return head;
}
