### ����ָ�뷨
#### ż��ʱ��ȡ��һ���м��㣨��[1,2,3,4,5,6]��ȡ4����fast�ƶ���nullptrʱֹͣ
> fast!= nullptr��Ӧż��

> fast->next != nullptr��Ӧ������fast�ƶ������һ���ڵ�ʱֹͣ
```c++
while (fast != nullptr && fast->next != nullptr) {
    fast = fast->next->next;
    slow = slow->next;
}
```


#### ż��ʱ��ȡǰһ���м��㣨��[1,2,3,4,5,6]ȡ3����fast�ƶ��������ڶ����ڵ�ʱֹͣ
> fast->next->next != nullptr��Ӧż��

> fast->next != nullptr��Ӧ������fast�ƶ������һ���ڵ�ʱֹͣ
```c++
 while (fast->next != nullptr && fast->next->next != nullptr) {
    fast = fast->next->next;
    slow = slow->next;
 }
```

## ˵��
ѭ�������ֱ��Ӧ������ڵ���Ϊ��ż�������