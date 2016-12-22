#include <iostream>
#include "stacktype.h"
#include "stacktype.cpp"
using namespace std;

int main()
{
    StackType<int> x;

    if(x.IsEmpty())
        cout << "Stack is Empty" << endl;
    else
        cout << "Stack is not Empty" << endl;

    x.Push(5);
    x.Push(7);
    x.Push(4);
    x.Push(2);

    if(x.IsEmpty())
        cout << "Stack is Empty" << endl;
    else
        cout << "Stack is not Empty" << endl;

    if(x.IsFull())
        cout << "Stack is full" << endl;
    else
        cout << "Stack is not full" << endl;

    x.PrintStack();
    cout << endl;

    x.Push(3);
    x.PrintStack();
    cout << endl;

    if(x.IsFull())
        cout << "Stack is full" << endl;
    else
        cout << "Stack is not full" << endl;

    x.Pop();
    x.Pop();

    cout << x.Top() << endl;


    cout << endl;
    x.PrintStack();
    cout << endl;
    x.ReplaceItem(7, 9);
    x.PrintStack();

    return 0;
}
