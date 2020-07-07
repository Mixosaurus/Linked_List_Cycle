#include <iostream>
#include <stack> 
#include "solution.h"

using namespace std;

bool Solution::isPalindrome(ListNode* head) {
    //null�����һ���ڵ������������������
    if (head == nullptr || head->next == nullptr) {
        return true;
    }
    bool isPalindrome = true;
    ListNode* p = head;
    ListNode* fast = head;
    ListNode* slow = head;
    stack<int> stack;
    while (fast->next != nullptr && fast->next->next != nullptr) {
        //��ǰ�����ջ
        stack.push(slow->val);
        fast = fast->next->next;
        slow = slow->next;
    }
    //����whileѭ������ʱfastָ������λ���ж�����ڵ������ż��ż������£���slow��ָ�ڵ���ջ
    if (fast->next != nullptr && fast->next->next == nullptr) {
        stack.push(slow->val);
    }
    //ʹslow���е㣨���������е����һ���ڵ㣨ż�����ƶ������ο�ʼλ��
    slow = slow->next;
    while (!stack.empty()) {
        if (stack.top() != slow->val) {
            isPalindrome = false;
        }
        slow = slow->next;
        stack.pop();
    }
    return isPalindrome;
}

