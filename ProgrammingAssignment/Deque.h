#ifndef _Deque_H
#define _Deque_H

#include <iostream>

struct DNode {
	int obj;
	DNode* past, * next;

	DNode(int obj) {
		this->obj = obj;
		this->past = this->next = NULL;
	} 
};

class Deque {
	
private:
	DNode* head, * tail;
	int NumberOfObjects;
public:
	Deque();
	~Deque();
	bool IsEmpty() { return NumberOfObjects == 0; }
	int  Size() { return NumberOfObjects; }
	int Front();
	int Rear();
	void AddFront(int obj);
	void AddRear(int obj);
	int RemoveFront();
	int RemoveRear();
	void Print(int first ,int last);
	
};

#endif