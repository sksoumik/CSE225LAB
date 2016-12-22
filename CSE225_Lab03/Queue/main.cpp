#include <iostream>
#include "quetype.h"
#include "quetype.cpp"
using namespace std;

int main()
{
    //Task 01
    QueType<int> x(5);

    if(x.IsEmpty())
        cout << "Queue is empty" << endl;
    else
        cout << "Queue is not empty" << endl;

    x.Enqueue(5);
    x.Enqueue(7);
    x.Enqueue(4);
    x.Enqueue(2);

    if(x.IsEmpty())
        cout << "Queue is empty" << endl;
    else
        cout << "Queue is not empty" << endl;

    if(x.IsFull())
        cout << "Queue is Full" << endl;
    else
        cout << "Queue is not Full" << endl;

    x.Enqueue(6);

    x.PrintQueue();
    cout << endl;

    //Task 02
    if(x.IsFull())
        cout << "Queue is Full" << endl;
    else
        cout << "Queue is not Full" << endl;

    try{
        x.Enqueue(8);
    }
    catch(FullQueue e){
        cout << "Queue Overflow" << endl;
    }

    int a, b;
    x.Dequeue(a);
    x.Dequeue(b);
    x.PrintQueue();
    cout << endl;

    int c, d, e;
    x.Dequeue(c);
    x.Dequeue(d);
    x.Dequeue(e);

    if(x.IsEmpty())
        cout << "Queue is empty" << endl;
    else
        cout << "Queue is not empty" << endl;

    try{
        int f;
        x.Dequeue(f);
    }
    catch(EmptyQueue e){
        cout << "Queue Underflow" << endl;
    }

    //Task 03
    cout << "\n" << endl;
    x.Enqueue(21);
    x.Enqueue(26);
    x.Enqueue(13);
    x.Enqueue(26);
    x.Enqueue(29);

    x.PrintQueue();
    cout << endl;

    x.ReplaceItem(26, 9);
    x.PrintQueue();
    cout << endl;

    return 0;
}
