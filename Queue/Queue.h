#pragma once
#include<iostream>
//#include<vector>
using namespace std;

class Queue {
public:
	Queue();
	Queue(int len);
	~Queue();
	void push(int x);
	int get_top();
	void pop();
	bool isEmpty();
	int get_length();
	

private:
	int* data;
	int head, length, tail;//ͷָ�루�����е�һ��Ԫ�أ���βָ�루���������һ��Ԫ�أ�������Ԫ�ظ���

};