#include "LinkList.h"
#include "LinkList.cpp"//��ģ���������cpp
#include "SeqList.h"
#include "SeqList.cpp"

int main() {
    //LinkList����
    /*LinkList<int> p({1,2}, 2);
    cout << "��{1, 2}��ʼ������\n";
    p.printList();
    p.insert(1, 6);
    p.insert(2, 9);
    p.insert(2, 3);
    cout << "�ڵ�һ��λ�ò���6\n�ڵڶ���λ�ò���9\n�ڵڶ���λ�ò���3\n";
    p.printList();
    cout << "��2��Ԫ���ǣ�\n";
    cout << p.get_ith(2) << endl;
    cout << "Ԫ��9���ڵ�λ���ǣ�\n";
    cout << p.locate(9) << endl;
    cout << "��ǰ�����е�Ԫ�ظ����ǣ�\n";
    cout << p.get_length() << endl;
    p.delete_ith(1);
    cout << "ɾ����һ��Ԫ�أ�" << endl;
    p.printList();*/

    //˳������
    SeqList<int> p;
    p.insert(1, 5);
    p.insert(2, 9);
    p.printList();
    p.insert(2, 3);
    cout << p.get_length() << endl;
    p.printList();
    cout << p.get_ith(3) << endl;
    p.delete_ith(2);
    p.printList();
    
    return 0;
}