#pragma once
#include<vector>
#include<iostream>
using namespace std;
//�ڵ㶨��
template<class T>
struct Node {
	T data;
	Node<T>* next;
};

template<class T>
class LinkList {
public:
	LinkList();//�޲ι���
	LinkList(vector<T>a, int n);//���鹹�죬ͷ�巨��β�巨
	~LinkList();//������ɾ�����нڵ�
	int get_length();//��ȡԪ�ظ���
	T get_ith(int i);//��ȡ��i��Ԫ��
	int locate(T x);//����Ԫ���������е�λ��
	void insert(int i, T x);//�ڵ�i��λ�ò���Ԫ��x
	T delete_ith(int i);//ɾ����i��Ԫ��
	void printList();//��ӡ����Ԫ��

private:
	Node<T>* head;//ͷ���
};
