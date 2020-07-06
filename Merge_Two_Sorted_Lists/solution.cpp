#include <iostream>
#include <stack> 
#include "solution.h"

using namespace std;

ListNode* Solution::mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode* p = l1;
    ListNode* q = l2;
    //βָ�룬ʼ��ָ��������β��
    //�ڵ�һ��ѭ��ʱ��ʼ��
    //����ʼ��Ϊ�գ�˵��û�н��й��鲢��������whileѭ����δִ��
    //�ɽ����Ƿ�Ϊ����Ϊ�ж�����
    ListNode* r = nullptr;
    //����������Խ����������е���С�ڵ�
    //���պ󣬿ɽ������������Ͽ���Ҳ�ɲ��Ͽ�
    ListNode* result = nullptr;
    //�ڵ�һ��ѭ��ʱ��ȡ����Сֵ�ڵ���Ϊͷ���
    //�˴���ȡ�²��Ǳ��뽫ͷ�ڵ������Ͽ���Ҳ���Բ��Ͽ�
    while (p!=nullptr&&q!=nullptr) {
        //p��ָ�ڵ�Ϊ��Сֵ�ڵ�
        if (p->val <= q->val) {
            if (r == nullptr) {
                r = p;
                result = r;
                p = p->next;
            } else {
                r->next = p;
                p = p->next;
                r = r->next;
            }
        } 
        //q��ָ�ڵ�Ϊ��Сֵ�ڵ�
        else {
            if (r == nullptr) {
                r = q;
                result = r;
                q = q->next;
            } else {
                r->next = q;
                q = q->next;
                r = r->next;
            }
        }
    }
    if (p != nullptr && q == nullptr) {
        if (r != nullptr) {
            r->next = p;
        } else {
            return p;
        }
    }
    if (q != nullptr && p == nullptr) {
        if (r != nullptr) {
            r->next = q;
        } else {
            return q;
        }
    }
    return result;
}
