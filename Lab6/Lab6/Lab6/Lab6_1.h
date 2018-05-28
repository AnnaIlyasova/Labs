#pragma once

#include <iostream>
#include "Lab6.h"

class Queue
{
private:
OCL *arr;

int size;

public:

Queue();
Queue(const Queue &other);
Queue(Queue &&other);
Queue &operator=(const Queue &other);
Queue &operator=(Queue &&other);
~Queue();

int GetSize();
void Push(const int element);
int Pop();
int Peek();

friend ostream & operator<<(ostream & stream, const Queue &other);
};