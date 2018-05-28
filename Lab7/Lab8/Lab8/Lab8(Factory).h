#pragma once
#include "Lab8(Array).h"
#include "Lab8_1.h"
#include "Lab8(CircularList).h"
template<typename T>
class Creator
{
public:
	virtual Storage<T>* factoryMethod(int count) = 0;
};
template<typename T>
class ConcreteCreatorQueueBasedOnArray : public Creator<T>
{
public:
	~ConcreteCreatorQueueBasedOnArray() {};
	Storage<T>* factoryMethod(int count) override
	{
		return new QueueBasedOnArray<T>(count);
	}
};
template<typename T>
class ConcreteCreatorQueueBasedOnUnidirectionalList : public Creator<T>
{
public:
	~ConcreteCreatorQueueBasedOnUnidirectionalList() {};
	Storage<T>* factoryMethod(int count) override
	{
		return new QueueBasedOnUnidirectionalList<T>(count);
	}
};
template<typename T>
class ConcreteCreatorQueueBasedOnBidirectionalCircularList : public Creator<T>
{
public:
	~ConcreteCreatorQueueBasedOnBidirectionalCircularList() {};
	Storage<T>* factoryMethod(int count) override
	{
		return new QueueBasedOnBidirectionalCircularList<T>(count);
	}
};
