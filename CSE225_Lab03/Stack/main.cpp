#include <iostream>
#include "stacktype.h"
using namespace std;

int main()
{
    //Task 01
    StackType x;

    if(x.IsEmpty())
        cout << "Stack is Empty" << endl;
    else
        cout << "Stack is not Empty" << endl;

    ItemType a, b, c, d;
    a.Initialize(5);
    b.Initialize(7);
    c.Initialize(4);
    d.Initialize(2);

    x.Push(a);
    x.Push(b);
    x.Push(c);
    x.Push(d);

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


    //Task 02
    ItemType e;
    e.Initialize(3);
    x.Push(e);
    x.PrintStack();
    cout << endl;

    if(x.IsFull())
        cout << "Stack is full" << endl;
    else
        cout << "Stack is not full" << endl;

    x.Pop();
    x.Pop();
    x.Top().Print();
    cout << endl;

    //Task 03
    /*x.PrintStack();
    cout << endl;
    StackType y;
    cout << "\n" << y.sumOdd(x) << endl;*/

    StackType y, z;
    ItemType a1, a2, a3, a4, a5;

    a1.Initialize(4);
    a2.Initialize(3);
    a3.Initialize(1);
    a4.Initialize(2);
    a5.Initialize(5);

    z.Push(a1);
    z.Push(a2);
    z.Push(a3);
    z.Push(a4);
    z.Push(a5);

    z.PrintStack();
    cout << endl;
    //cout << "\n" << y.sumOdd(z) << endl;
    cout << z.sumOdd(z) << endl;

    return 0;
}
