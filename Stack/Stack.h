#pragma once
#include <iostream>
using std::cout;
#include "Array.h"
#include "StackOverFlowExecption.h"

template <class T>
class Stack
{

private:
	Array <T> mStack;  // stack elements are stored in the custum defined arrray
	int mTop{ -1 }; // indicates the current top position in the stack

public:
	Stack() = delete;

	Stack(int maxStackSize) : mStack{ maxStackSize } {}

	~Stack() {}

	int CurrentSize() const{
		return mTop + 1;
	}

	int MaxSize() const {
		return mStack.Size();
	}

	bool IsEmpty() const {
		return CurrentSize() == 0;
	}

	void Push(int element) {
		try {
			if (CurrentSize() < MaxSize()) {
				mTop++;
				mStack[mTop] = element;
			}
			else {
				throw StackOverFlowExecption();
			}
		
		}
		catch (std::exception& e) {
			cout << e.what();
			exit(0); // need a better way to handle the execption		
		}					
	}
	

	void Pop() {
	
		try {
			if (CurrentSize() <= MaxSize()) {
				mTop--;
								
			}
			else {
				throw StackOverFlowExecption();
			}

		}
		catch (std::exception& e) {
			cout << e.what();
			exit(0); // need a better way to handle the execption		
		}
	
	}

	int Top() {
		if (!IsEmpty()) {
			return mStack[mTop];
		}
		else {
			return -1;
		}
	}

	void reset() {
		if (!IsEmpty()) {
			mTop = -1;
		}	
	}

	
	//// ban copy constructor and assignment operators
	//Stack(const Stack& rhs) = delete;
	//Stack& operator = (const Stack& rsh) = delete;

};


