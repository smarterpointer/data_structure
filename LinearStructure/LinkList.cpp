#include "LinkList.h"

//��ʼ����ֻ��ͷ���Ŀ�����
template<class T>
LinkList<T>::LinkList()
{
	head = new Node<T>;
	head->next = NULL;
}
//���������Ԫ�ظ���������������
template<class T>
LinkList<T>::LinkList(vector<T> a, int n)
{
	//ͷ�巨
	head = new Node<T>;
	head->next = NULL;
	
	for (int i = 0; i < n; i++) {
		Node<T>* node = new Node<T>;
		node->data = a[i];
		node->next = head->next;
		head->next = node;
	}
	//β�巨
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
//�����������ͷ�ÿ���ڵ�
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
//��ȡ������
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
//��λ����
template<class T>
T LinkList<T>::get_ith(int i)
{
	Node<T>* cur = head;
	int count = 0;//�Ϸ����ж�
	while (cur != NULL && count < i) {
		cur = cur->next;
		count++;
	}
	if (cur == NULL) throw "Location";
	return cur->data;
}
//��ֵ���� ����λ�� �����±�
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
	return 0;//��ʾû�ҵ�
}
//�ڵ�i��λ�ò���Ԫ��x
template<class T>
void LinkList<T>::insert(int i, T x)
{
	Node<T>* cur = head;
	int count = 0;
	//�ҵ������
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
//ɾ����i��Ԫ��
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
//��ӡ�б�Ԫ��
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
