#include <iostream>
#include "quetype.h"
#include "quetype.cpp"
using namespace std;

int main()
{
    QueType<int> x;

    if(x.IsEmpty())
        cout << "Queue is Empty" << endl;
    else
        cout << "Queue is not Empty" << endl;

    x.Enqueue(5);
    x.Enqueue(7);
    x.Enqueue(4);
    x.Enqueue(2);

    if(x.IsEmpty())
        cout << "Queue is Empty" << endl;
    else
        cout << "Queue is not Empty" << endl;

    if(x.IsFull())
        cout << "Queue is Full" << endl;
    else
        cout << "Queue is not Full" << endl;

    x.Enqueue(6);

    //print queue
    x.PrintQueue();
    cout << endl;

    if(x.IsFull())
        cout << "Queue is Full" << endl;
    else
        cout << "Queue is not Full" << endl;

    x.Enqueue(8);

    int a, b, c;
    x.Dequeue(a);
    x.Dequeue(b);
    x.Dequeue(c);
    x.PrintQueue();
    cout << endl;

    int e, f, g;
    x.Dequeue(e);
    x.Dequeue(f);
    x.Dequeue(g);

    if(x.IsEmpty())
        cout << "Queue is Empty" << endl;
    else
        cout << "Queue is not Empty" << endl;

    int n;
    try{
        x.Dequeue(n);
    }
    catch(EmptyQueue e){
        cout << "Queue Underflow" << endl;
    }

    QueType<char> y;
    y.Enqueue('n');
    y.Enqueue('o');
    y.Enqueue('w');
    y.Enqueue('y');
    y.Enqueue('h');
    cout << "Length is: " << y.Length() << endl;

    return 0;
}
