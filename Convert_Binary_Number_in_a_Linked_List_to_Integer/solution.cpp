#include <iostream>
#include <stack> 
#include <cmath>
#include "solution.h"

using namespace std;

int Solution::getDecimalValue(ListNode* head) {
	//��base++�ڴ˴��ɻ�ȡ�ݹ�ʵ��ִ�д���
	if (head->next == nullptr) {
		return head->val;
	}
	//��base++���ڴ˴���base��ֵ��������
	int sub_val = getDecimalValue(head->next);
	//��base++���ڴ˴���base��ֵ�������
	base++
	return head->val *pow(2,base) + sub_val;
 }
