#include <iostream>
#include "Stack.h"
using namespace std;

bool Stack::reallocate()
{
	/*
	即栈满的时候，
	应该将重新开辟新的空间（大小为源空间大小+STACK_INCREMENT），
	然后将数据复制到新空间，在重新释放旧空间
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
