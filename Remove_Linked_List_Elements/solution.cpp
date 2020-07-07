#include <iostream>
#include <stack> 
#include "solution.h"

using namespace std;

ListNode* Solution::removeElements(ListNode* head, int val) {
	if (head == nullptr) {
		return head;
	}
	ListNode* p = head;
	//��p->next���Ҵ�ɾ���ڵ�
	while (p->next != nullptr) {
		if (p->next->val == val) {
			if (p->next->next != nullptr) {
				//��ʱ��p->next�Ǵ�ɾ���ڵ�
				*(p->next) = *(p->next->next);
			} else {
				p->next = nullptr;
			}
		} else {
			p = p->next;
		}
	}
	//ʹ��p->next���ң���ͷ�ڵ�ĺ�̿�ʼ���ң��޷�ɾ��ͷ���
	if (head->val == val) {
		head = head->next;
	}
	return head;
}
