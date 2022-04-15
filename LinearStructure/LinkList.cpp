#include "LinkList.h"

//初始化，只含头结点的空链表
template<class T>
LinkList<T>::LinkList()
{
	head = new Node<T>;
	head->next = NULL;
}
//给定数组和元素个数，构造新链表
template<class T>
LinkList<T>::LinkList(vector<T> a, int n)
{
	//头插法
	head = new Node<T>;
	head->next = NULL;
	
	for (int i = 0; i < n; i++) {
		Node<T>* node = new Node<T>;
		node->data = a[i];
		node->next = head->next;
		head->next = node;
	}
	//尾插法
	/*
	head = new Node<T>;
	Node<T>* cur = head;
	for (int i = 0; i < n; i++) {
		Node<T>* node = new Node<T>;
		node->data = a[i];
		cur->next = node;
		cur = node;
	}
	cur->next = NULL;
	*/
}
//析构函数，释放每个节点
template<class T>
LinkList<T>::~LinkList()
{
	while (head != NULL) {
		Node<T>* tmp;
		tmp = head;
		head = head->next;
		delete tmp;
	}
}
//获取链表长度
template<class T>
int LinkList<T>::get_length()
{
	int res = 0;
	Node<T>* cur = head->next;
	while (cur != NULL) {
		res++;
		cur = cur->next;
	}
	return res;
}
//按位查找
template<class T>
T LinkList<T>::get_ith(int i)
{
	Node<T>* cur = head;
	int count = 0;//合法性判断
	while (cur != NULL && count < i) {
		cur = cur->next;
		count++;
	}
	if (cur == NULL) throw "Location";
	return cur->data;
}
//按值查找 返回位序 不是下标
template<class T>
int LinkList<T>::locate(T x)
{
	Node<T>* cur = head;
	int count = 0;
	while (cur != NULL) {
		if (cur->data == x) return count;
		count++;
		cur = cur->next;
	}
	return 0;//表示没找到
}
//在第i个位置插入元素x
template<class T>
void LinkList<T>::insert(int i, T x)
{
	Node<T>* cur = head;
	int count = 0;
	//找到插入点
	while (cur != NULL && count < i - 1) {
		cur = cur->next;
		count++;
	}
	if (cur == NULL && count < i - 1) throw "Location";
	else {
		Node<T>* tmp = new Node<T>;
		tmp->data = x;
		tmp->next = cur->next;
		cur->next = tmp;
		//delete tmp;
	}
}
//删除第i个元素
template<class T>
T LinkList<T>::delete_ith(int i)
{
	Node<T>* cur = head;
	int count = 0;
	while (cur != NULL && count < i - 1) {
		cur = cur->next;
		count++;
	}
	if (cur == NULL && count < i - 1) throw "Location";
	else {
		int x = cur->next->data;
		cur->next = cur->next->next;
		return x;
	}

	return T();
}
//打印列表元素
template<class T>
void LinkList<T>::printList()
{
	Node<T>* cur = head->next;
	while (cur != NULL) {
		cout << cur->data << "\t";
		cur = cur->next;
	}
	cout << endl;
}
