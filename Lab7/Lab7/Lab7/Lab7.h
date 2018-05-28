#pragma once

using namespace std;

struct OCLNode
{
	int data;
	OCLNode* ptrnext;
	OCLNode* ptrprev;
};

class OCL
{
private:
	OCLNode* first;
	OCLNode* last;
public:
	OCL();
	~OCL();
	void AddBack(int dt);
	void AddFront(int dt);
	int RemoveFront();
	int RemoveBack();
	int ElementAt(int index);
	void DeleteLink(OCLNode* node);
	OCL operator=(OCL& l);
	int Length();
	void Clear();
};