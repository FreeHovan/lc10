#include <iostream>

using namespace std;

class NoElementsException :public exception
{
public:
	NoElementsException(const char* msg) :
		exception(msg) {}
};

struct Node 
{
	int a;
	Node* next;
};

class Queue
{
public:
	Queue();
	Queue(int);
	Queue& operator=(Queue&&);
	int GetSize() const;
	void Push(const int);
	void Pop(int&);
	bool HasElements() const;
	void Peek(int&);
private:
	Node* next;
	Node* tail;
	int size;
};