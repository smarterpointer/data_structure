#include "SeqList.h"

template<class T>
SeqList<T>::SeqList()
{
	length = 0;
	data.resize(maxSize);
}

template<class T>
SeqList<T>::SeqList(vector<T> a, int n)
{
	if (n > maxSize) throw "wrong parameter";
	for (int i = 0; i < n; i++) {
		data[i] = a[i];
	}
	length = n;
}

template<class T>
SeqList<T>::~SeqList()
{
}

template<class T>
int SeqList<T>::get_length()
{
	return length;
}

template<class T>
T SeqList<T>::get_ith(int i)
{
	if (i<1 || i>length) throw "wrong Location";
	return data[i-1];
}

template<class T>
int SeqList<T>::locate(T x)
{
	for (int i = 0; i < length; i++) {
		if (data[i] == x) return i + 1;
	}
	return 0;
}

template<class T>
void SeqList<T>::insert(int i, T x)
{
	if (length >= maxSize) throw "Overflow";
	if (i<1 || i>length + 1) throw "wrong Location";
	for (int j = length; j >= i; j--) {
		data[j] = data[j - 1];
	}
	data[i-1] = x;
	length++;
}

template<class T>
T SeqList<T>::delete_ith(int i)
{
	T res;
	if (length == 0) throw "Underflow";
	if (i<1 || i>length) throw "wrong Location";
	res = data[i - 1];
	for (int j = i; j < length; j++) {
		data[j - 1] = data[j];
	}
	length--;
	return res;
}

template<class T>
void SeqList<T>::printList()
{
	for (int i = 0; i < length; i++) {
		cout << data[i] << "\t";
	}
	cout << endl;
}
