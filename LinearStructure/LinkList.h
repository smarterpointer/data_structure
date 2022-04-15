#pragma once
#include<vector>
#include<iostream>
using namespace std;
//节点定义
template<class T>
struct Node {
	T data;
	Node<T>* next;
};

template<class T>
class LinkList {
public:
	LinkList();//无参构造
	LinkList(vector<T>a, int n);//数组构造，头插法，尾插法
	~LinkList();//析构，删除所有节点
	int get_length();//获取元素个数
	T get_ith(int i);//获取第i个元素
	int locate(T x);//返回元素在链表中的位序
	void insert(int i, T x);//在第i个位置插入元素x
	T delete_ith(int i);//删除第i个元素
	void printList();//打印链表元素

private:
	Node<T>* head;//头结点
};
