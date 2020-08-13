#pragma once
#include <iostream>
using std::cout;

class Stack
{
	
private:
	int mMaxStackSize{0};
	int mCurrentNumberOfItem{ 0 };
	int* mTop{ nullptr };

public:
	Stack() = delete;

	Stack(int maxStackSize);

	~Stack();

	void Push(int element);

	void Pop();

	int Top();

	void reset();

	bool IsEmpty();

	int HowManyItem();

	// ban copy constructor and assignment operators
	Stack(const Stack& rhs) = delete;
	Stack& operator = (const Stack& rsh) = delete;
	
};

