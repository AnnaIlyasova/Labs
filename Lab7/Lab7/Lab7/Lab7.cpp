#include "Lab7.h"

OCL::OCL()
{
	first = nullptr;
	last = nullptr;
}

OCL::~OCL()
{
	while (first != last)
	{
		OCLNode* tmp = first;
		first = first->ptrprev;
		delete tmp;
	}

	delete last;
}

void OCL::AddBack(int dt)
{
OCLNode* newlink = new OCLNode;
newlink->data = dt;
if (first)
{
newlink->ptrprev = first;
first->ptrnext = newlink;
}
else last = newlink;
newlink->ptrnext = last;
last->ptrprev = newlink;
first = newlink;
}

void OCL::AddFront(int dt)
{
OCLNode* newlink = new OCLNode;
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

int OCL::RemoveFront()

{

int data = first->data;

DeleteLink(first);

return data;

}

int OCL::RemoveBack()

{

int data = last->data;

DeleteLink(last);

return data;

}

int OCL::ElementAt(int index)

{

if (index > Length()) return -1;

OCLNode* temp = first;

int i = 0;

do

{

if (i == index) return temp->data;

temp = temp->ptrprev;

i++;

} while (temp != first);

}

void OCL::DeleteLink(OCLNode* temp)

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

OCL OCL::operator=(OCL& l)

{

if (l.first)

{

OCLNode* temp = l.first;

do

{

AddFront(temp->data);

temp = temp->ptrprev;

} while (temp != l.first);

}

return *this;

}

int OCL::Length()

{

if (first)

{

OCLNode* temp = first;

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

void OCL::Clear()

{

while (first->ptrprev != last)

{

OCLNode* temp = first->ptrprev;

first = first->ptrprev;

delete temp;

}

last = nullptr;

first = nullptr;

}