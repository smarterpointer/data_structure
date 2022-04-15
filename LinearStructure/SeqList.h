#pragma once
#include<vector>
#include<iostream>
using namespace std;

const int maxSize = 100;
template<class T>
class SeqList {
public:
	SeqList();//�޲ι���
	SeqList(vector<T>a, int n);//���鹹��
	~SeqList();//������ɾ������Ԫ��
	int get_length();//��ȡԪ�ظ���
	T get_ith(int i);//��ȡ��i��Ԫ��
	int locate(T x);//����Ԫ����˳����е�λ��
	void insert(int i, T x);//�ڵ�i��λ�ò���Ԫ��x
	T delete_ith(int i);//ɾ����i��Ԫ��
	void printList();//��ӡ����Ԫ��
private:
	int length;
	vector<T> data;
};

