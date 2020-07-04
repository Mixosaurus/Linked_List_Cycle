#include <iostream>
#include "solution.h"

using namespace std;

bool Solution::hasCycle(ListNode* head) {
    //�������ų�null��һ�ڵ㡢���ڵ��������Ϊֻ�������ڵ��������п����л�
    //�ڴ˴��ų�null��һ�ڵ���������ڵ�������ִ���п��ų�
    if (head == nullptr || head->next == nullptr) {
        return false;
    }
    ListNode* fast = head->next;
    ListNode* slow = head;
    while (fast->next != nullptr && fast->next->next != nullptr) {
        if (fast == slow) {
            return true;
        }
        fast = fast->next->next;
        slow = slow->next;
    }
    return false;
}
