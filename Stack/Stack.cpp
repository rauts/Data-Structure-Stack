#include "Stack.h"


Stack::Stack(int maxStackSize) {
	mMaxStackSize = maxStackSize;
	mTop = new int[mMaxStackSize] {};
}

Stack::~Stack() {
	delete[] mTop;
}

