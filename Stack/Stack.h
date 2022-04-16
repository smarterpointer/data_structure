#pragma once

#define STACK_INIT_SIZE 100//栈的初始大小
#define STACK_INCREMENT 10//栈每次增长时的增量

class Stack {
public:
	Stack();
	~Stack();
	void clearStack();//清空栈中元素
	bool isEmpty();//判断栈是否为空
	int getTop();//返回栈顶元素
	bool push(int x);//元素入栈
	bool pop();//元素出栈
	int get_length();//获取元素个数

private:
	int* arr;
	int top;//指向下一个可以添加元素的位置，初始为零
	int curSize;
	bool reallocate();//当栈已满时添加元素会调用该函数，重新分配空间
};
