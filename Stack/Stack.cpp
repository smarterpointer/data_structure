#include <iostream>
#include "Stack.h"
using namespace std;

bool Stack::reallocate()
{
	/*
	��ջ����ʱ��
	Ӧ�ý����¿����µĿռ䣨��СΪԴ�ռ��С+STACK_INCREMENT����
	Ȼ�����ݸ��Ƶ��¿ռ䣬�������ͷžɿռ�
	*/
	int* tmp = new int[STACK_INCREMENT + curSize];
	for (int i = 0; i < top; i++) {
		tmp[i] = arr[i];
	}
	arr = tmp;
	curSize += STACK_INCREMENT;
	if (arr != NULL) return true;
	return false;
}

Stack::Stack()
{
	arr = new int[STACK_INIT_SIZE];
	top = 0;
	curSize = STACK_INIT_SIZE;
}

Stack::~Stack()
{
	delete[]arr;
	arr = NULL;
	top = 0;
	curSize = 0;
}

void Stack::clearStack()
{
	top = 0;
}

bool Stack::isEmpty()
{
	return top==0;
}

int Stack::getTop()
{
	if (top == 0) throw "Stack is empty!";
	return arr[top - 1];
}

bool Stack::push(int x)
{
	bool flag=true;
	if (top == curSize) flag = reallocate();
	arr[top++] = x;
	return flag;
}

bool Stack::pop()
{
	if(top==0) throw "Stack is empty!";
	top--;
	return true;
}

int Stack::get_length()
{
	return top;
}
