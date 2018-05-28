#pragma once

using namespace std;

template<typename T>
struct OCLNode
{
T data;
OCLNode* ptrnext;
OCLNode* ptrprev;
};

template<typename T>
class OCL
{
private:
OCLNode<T>* first;
OCLNode<T>* last;

public:
OCL()
{
first = nullptr;
last = nullptr;
}

~OCL()
{
while (first != last)
{

OCLNode<T>* tmp = first;
first = first->ptrprev;
delete tmp;
}
delete last;
}

void AddBack(T dt)
{
OCLNode<T>* newlink = new OCLNode<T>;

newlink->data = dt;
if (first)

{
newlink->ptrprev = first;
first->ptrnext = newlink;

}
else last = newlink;
newlink->ptrnext = last;
last->ptrprev = newlink;
frst = newlink;
}

void AddFront(T dt)

{
OCLNode<T>* newlink = new OCLNode<T>;

newlink->data = dt;
if (last)

{
newlink->ptrnext = last;
last->ptrprev = newlink;
}

else first = newlink;
newlink->ptrprev = first;

first->ptrnext = newlink;
last = newlink;
}

T RemoveFront()
{
T data = first->data;
DeleteLink(first);
return data;
}

T RemoveBack()

{
T data = last->data;
DeleteLink(last);
return data;
}

T ElementAt(int index)

{
	if (index > Length()) return -1;
	OCLNode<T>* temp = first;
	int i = 0;
	
	do
{
	if (i == index) return temp->data;
	temp = temp->ptrprev;
	i++;

} 
while (temp != first);
}

void DeleteLink(OCLNode<T>* temp)

{
	if (first)
{
if (temp->ptrnext == temp)

{
first = nullptr;
last = nullptr;
}

else

{
	if (temp == last) last = last->ptrnext;
	if (temp == first) first = first->ptrprev;

	(temp->ptrnext)->ptrprev = temp->ptrprev;
	(temp->ptrprev)->ptrnext = temp->ptrnext;

delete temp;

}
	}
}

OCL operator=(OCL& l)

{

if (l.first)

{

OCLNode<T>* temp = l.first;

do

{

AddFront(temp->data);

temp = temp->ptrprev;

} while (temp != l.first);

}

return *this;

}

int Length()

{

if (first)

{
	OCLNode<T>* temp = first;

int i = 0;

do

{

temp = temp->ptrprev;

i++;

} while (temp != first);

return i;

}

else return 0;

}

void Clear()

{

while (first->ptrprev != last)

{

OCLNode<T>* temp = first->ptrprev;

first = first->ptrprev;

delete temp;

}

last = nullptr;

first = nullptr;

}

};