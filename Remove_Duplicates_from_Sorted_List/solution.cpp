#include <iostream>
#include <stack> 
#include "solution.h"

using namespace std;

ListNode* Solution::deleteDuplicates(ListNode* head) {
    if (head == nullptr) {
        return nullptr;
    }
    ListNode* p = head;
    ListNode* q = head;
    //�����������˵����ڵ�����
    while (p->next != nullptr) {
        //����ʹp��ָԪ����������Ƚ�
        q = p->next;
        while (q != nullptr) {
            if (p->val == q->val) {
                if (q->next != nullptr) {
                    //��qָ�����һ���ڵ�ʱ���޷��øķ�ʽɾ��
                    *q = *(q->next);
                } else {
                    //��qָ�����һ���ڵ�ʱ����ʱp��ָ�ڵ�ǡ��Ϊq��ָ�ڵ��ǰ��
                    //�����޷���*q = *(q->next)ɾ�����һ���ڵ㣬ֱ�ӽ�p��ָ�ڵ���Ϊ���һ���ڵ�
                    p->next = nullptr;
                    return head;
                }
            } else {
                q = q->next;
            }
        }
        p = p->next;
    }
    return head;
}
