#pragma once

#define STACK_INIT_SIZE 100//ջ�ĳ�ʼ��С
#define STACK_INCREMENT 10//ջÿ������ʱ������

class Stack {
public:
	Stack();
	~Stack();
	void clearStack();//���ջ��Ԫ��
	bool isEmpty();//�ж�ջ�Ƿ�Ϊ��
	int getTop();//����ջ��Ԫ��
	bool push(int x);//Ԫ����ջ
	bool pop();//Ԫ�س�ջ
	int get_length();//��ȡԪ�ظ���

private:
	int* arr;
	int top;//ָ����һ���������Ԫ�ص�λ�ã���ʼΪ��
	int curSize;
	bool reallocate();//��ջ����ʱ���Ԫ�ػ���øú��������·���ռ�
};
