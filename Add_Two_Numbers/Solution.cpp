#include "Solution.h"

ListNode* Solution::addTwoNumbers(ListNode* l1, ListNode* l2) {
    return add(l1, l2, false);
}

// carry ��ʾ��λ�Ƿ����λ��λ
ListNode* Solution::add(ListNode* l1, ListNode* l2, bool carry) {
    // sumΪ��������Ķ�Ӧ��λ����λ֮��
    int sum = 0;
    // �Ƚ���λ�ӵ�����
    if (carry) {
        sum = sum + 1;
    }
    if (l1 == nullptr && l2 == nullptr) {
        // l1��l2��Ϊnullʱ�����޵�λ�Ľ�λʱ����������
        // l1��l2��Ϊnullʱ�����е�λ�Ľ�λʱ��˵����λΪ��������λ
        // ��998+2=1000�����1000�����λΪ1����ʱsumΪ1
        if (!carry) {
            return nullptr;
        }
    }
    if (l1 == nullptr && l2!=nullptr) {
        sum = sum + l2->val;
    }
    if (l2 == nullptr && l1 != nullptr) {
        sum = sum + l1->val;
    }
    if (l1 != nullptr && l2 != nullptr) {
        sum = sum + l1->val + l2->val;
    }
    if (sum >= 10) { 
        // ��λ֮��=10ʱ����7+9=16�����λӦΪ16-10��6����ͬʱ���λ��λ
        ListNode* node = new ListNode(sum - 10);
        // sum>=10����Ҫ��λ����carry��Ϊtrue
        // �ж�l1��l2�Ƿ�Ϊnull����ֹ��ָ���쳣
        node->next = add(l1 == nullptr ? nullptr : l1->next, l2 == nullptr ? nullptr : l2->next, true);
        return node;
    } else {
        ListNode* node = new ListNode(sum);
        // sum<10������Ҫ��λ����carry��Ϊfalse
        // �ж�l1��l2�Ƿ�Ϊnull����ֹ��ָ���쳣
        node->next = add(l1 == nullptr ? nullptr : l1->next, l2 == nullptr ? nullptr : l2->next, false);
        return node;
    }
}
