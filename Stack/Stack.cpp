// Stack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::endl;

#include "Stack.h"

int main()
{
    Stack<int> s{ 5 };
    cout << "Current size = " << s.CurrentSize() << '\n';

    cout << "s.IsEmpty() = " << s.IsEmpty() << '\n';
    
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

    //// Throw StackOverflow exception
    //cout << "s.Push(6)\n";
    //s.Push(6);

    s.Pop();
    cout << "s.Pop()\n";
    cout << "Current size = " << s.CurrentSize() << '\n';

    cout << "s.Top() = " << s.Top() << '\n';

    s.reset();
    cout << "s.reset()\n";
    cout << "Current size = " << s.CurrentSize() << '\n';


    return 0;
}

