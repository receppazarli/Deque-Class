#include <iostream>
#include "Deque.h"

using namespace std;


Deque::Deque() {
	
	this->head = NULL;
	this->tail = NULL;
	this->NumberOfObjects = 0;
} 


Deque::~Deque() {
	
	delete head;
	delete tail;
	this->NumberOfObjects = 0;
} 


int Deque::Front() {
	
	if (head == NULL) {


		cout << "Empty !!!" << endl;
	}
	else {
		return head->obj;
	}
} 


int Deque::Rear() {
	
	if (head == NULL) {

		cout << "Empty !!!" << endl;
	}
	else {
		return tail->obj;
	}
} 



void Deque::AddRear(int obj) {
	
	DNode* temp = new DNode(obj);

	if (head == NULL) {
		head = temp;
		tail = temp;
	}
	else {
		tail->next = temp;
		temp->past = tail;
		tail = temp;
	}
	NumberOfObjects++;
} 

void Deque::AddFront(int obj) {
	
	DNode* temp = new DNode(obj);

	if (head == NULL) {
		head = temp;
		tail = temp;
	}
	else {
		temp->next = head;
		head->past = temp;
		head = temp;
	}
	NumberOfObjects++;
} 





int Deque::RemoveRear() {
	
	DNode* temp;
	int temp2;
	if (head == NULL) {
		cout << "Empty !!!" << endl;

	}if (NumberOfObjects == 1) {
		temp = tail;
		temp2 = tail->obj;
		head = NULL;
		tail = NULL;
		delete temp;
		NumberOfObjects--;
		return temp2;
	}
	else {
		temp = tail;
		temp2 = tail->obj;
		tail = tail->past;
		tail->next = NULL;
		delete temp;
		NumberOfObjects--;
		return temp2;
	}
} 

void Deque::Print(int first, int last)
{
	cout << " First : " << first << endl;
	cout << " Last :" << last << endl;
}



int Deque::RemoveFront() {
	
	DNode* temp;
	int temp2;
	if (head == NULL) {

		cout << "Empty !!!" << endl;


	}if (NumberOfObjects == 1) {
		temp = head;
		temp2 = head->obj;
		head = NULL;
		tail = NULL;
		delete temp;
		NumberOfObjects--;
		return temp2;
	}
	else {
		temp = head;
		temp2 = head->obj;
		head = head->next;
		head->past = NULL;
		delete temp;
		NumberOfObjects--;
		return temp2;
	}
} 




