#include <stdio.h>
#include <iostream>
#include "Deque.h"

using namespace std;



int main() {

	Deque dq;

	if (dq.IsEmpty())
	{
		cout << " Is Empty !!!" << endl;
	}

	dq.AddFront(10);
	dq.AddRear(15);
	dq.AddFront(30);
	dq.AddRear(40);
	dq.Print(dq.Front(), dq.Rear());

	if (dq.IsEmpty())
	{
		cout << " Is Empty !!!" << endl;
	}

	cout << " Deque size : " << dq.Size() << endl;
	dq.RemoveFront();
	dq.RemoveRear();
	dq.IsEmpty();
	dq.Print(dq.Front(), dq.Rear());





		return 0;
}


