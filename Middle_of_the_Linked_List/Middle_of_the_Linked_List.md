# ����ָ�뷨

> fast!= nullptr��Ӧż��
> ż��ʱ��ȡ��һ���м��㣨��[1,2,3,4,5,6]��ȡ4����fast�ƶ���nullptrʱֹͣ
> fast->next != nullptr��Ӧ������fast�ƶ������һ���ڵ�ʱֹͣ
```
while (fast != nullptr && fast->next != nullptr) {
    fast = fast->next->next;
    slow = slow->next;
}
```
> fast->next->next != nullptr��Ӧż��
> ż��ʱ��ȡǰһ���м��㣨��[1,2,3,4,5,6]ȡ3����fast�ƶ��������ڶ����ڵ�ʱֹͣ
> fast->next != nullptr��Ӧ������fast�ƶ������һ���ڵ�ʱֹͣ
```
 while (fast->next != nullptr && fast->next->next != nullptr) {
    fast = fast->next->next;
    slow = slow->next;
 }
```

## ˵��
ѭ�������ֱ��Ӧ������ڵ���Ϊ��ż�������