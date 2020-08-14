// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::endl;

#include "Stack.h"

int main()
{
    Stack<int> s{ 5 };
    s.Push(1);
    s.Push(2);
    s.Push(3);
    cout << "s.Push(1)\n";
    cout << "s.Push(2)\n";
    cout << "s.Push(3)\n";
    cout << "Current size = " << s.CurrentSize() << '\n';
    s.Push(4);
    s.Push(5);
    cout << "s.Push(4)\n";
    cout << "s.Push(5)\n";


    cout << "s.Push(6)\n";
    s.Push(6);

    return 0;
}

