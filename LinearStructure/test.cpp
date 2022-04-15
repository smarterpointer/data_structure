#include "LinkList.h"
#include "LinkList.cpp"//类模板必须引入cpp
#include "SeqList.h"
#include "SeqList.cpp"

int main() {
    //LinkList测试
    /*LinkList<int> p({1,2}, 2);
    cout << "用{1, 2}初始化链表：\n";
    p.printList();
    p.insert(1, 6);
    p.insert(2, 9);
    p.insert(2, 3);
    cout << "在第一个位置插入6\n在第二个位置插入9\n在第二个位置插入3\n";
    p.printList();
    cout << "第2个元素是：\n";
    cout << p.get_ith(2) << endl;
    cout << "元素9所在的位置是：\n";
    cout << p.locate(9) << endl;
    cout << "当前链表中的元素个数是：\n";
    cout << p.get_length() << endl;
    p.delete_ith(1);
    cout << "删除第一个元素：" << endl;
    p.printList();*/

    //顺序表测试
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