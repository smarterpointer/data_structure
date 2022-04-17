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
	int head, length, tail;//头指针（队列中第一个元素），尾指针（队列中最后一个元素），队列元素个数

};