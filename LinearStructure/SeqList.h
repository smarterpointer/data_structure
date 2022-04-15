#pragma once
#include<vector>
#include<iostream>
using namespace std;

const int maxSize = 100;
template<class T>
class SeqList {
public:
	SeqList();//无参构造
	SeqList(vector<T>a, int n);//数组构造
	~SeqList();//析构，删除所有元素
	int get_length();//获取元素个数
	T get_ith(int i);//获取第i个元素
	int locate(T x);//返回元素在顺序表中的位序
	void insert(int i, T x);//在第i个位置插入元素x
	T delete_ith(int i);//删除第i个元素
	void printList();//打印链表元素
private:
	int length;
	vector<T> data;
};

