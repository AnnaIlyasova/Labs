#pragma once

#include <iostream>
#include "Lab7.h"
#include "Lab7_1.h"
#include "Lab7_Array.h"

using namespace std;

template <typename T>
class QueueOnOCL : public QueueBase<T>
{
	OCL<T> *arr;
	int size;

public:
	QueueOnOCL(); //инициализация
	QueueOnOCL(const QueueOnOCL &other); //копирование
	QueueOnOCL(QueueOnOCL &&other); //перемещение
	QueueOnOCL &operator=(const QueueOnOCL &other); //присваивание
	QueueOnOCL &operator=(QueueOnOCL &&other); //присваивание с перемещением
	~QueueOnOCL();

int GetSize() override

{
return size;
}

void Push(T element) override //Вставка (добавление) элемента

{
	arr->AddFront(element);
	size++;
}

T Pop() override //Удаление (взятие) элемента

{
	if (size > 0)
{
	T element = arr->RemoveFront();
	size--;

return element;

}

return 0;

}

T Peek() override //Просмотр (взятие без удаления) элемента

{
	T element = arr->RemoveBack();
	arr->AddBack(element);

return element;

}

friend ostream & operator << <T>(ostream & stream, const QueueOnOCL<T> &a); //Вывод

};

template<typename T>
QueueOnOCL<T>::QueueOnOCL()
{
	arr = new OCL<T>();
	size = 0;
}

template<typename T>
QueueOnOCL<T>::QueueOnOCL(const QueueOnOCL &other)
{
	arr = new OCL<T>();
	size = other.size;
	for (int i = 0; i < size; ++i)
	arr->AddBack(other.arr->ElementAt(size - i - 1));
}

template<typename T>

QueueOnOCL<T>::QueueOnOCL(QueueOnOCL &&other)

{

arr = other.arr;
size = other.size;
other.arr = nullptr;

}

template<typename T>

QueueOnOCL<T>::~QueueOnOCL()

{
	delete arr;
}

template<typename T>

QueueOnOCL<T> &QueueOnOCL<T>::operator=(const QueueOnOCL &other)

{

if (this == &other) return *this;
arr = new OCL<T>();
size = other.size;
for (int i = 0; i < size; ++i)
arr->AddFront(other.arr->ElementAt(i));
}

template<typename T>

QueueOnOCL<T> &QueueOnOCL<T>::operator=(QueueOnOCL &&other)

{

if (this == &other) return *this;
delete arr;
arr = other.arr;
size = other.size;
other.arr = nullptr;
}

template<typename T>

ostream & operator<<(ostream & stream, const QueueOnOCL<T> &other)

{
QueueOnOCL<T> *b = new QueueOnOCL<T>(other);

while (b->size > 0)
{
stream << b->Pop() << " ";
}

return stream;
}