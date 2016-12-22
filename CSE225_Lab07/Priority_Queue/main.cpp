#include <iostream>
#include "pqtype.h"
#include "pqtype.cpp"

using namespace std;

int main()
{
    PQType <int> pq1(10);
    if(pq1.IsEmpty()==true)
    {
        cout << "Queue is empty";
    }
    else
    {
        cout << "Queue is not empty";
    }
    cout<<endl;
    int i, n;
    for(i=0;i<10;i++)
    {
        cin>>n;
        pq1.Enqueue(n);
    }
    if(pq1.IsEmpty()==true)
    {
        cout << "Queue is empty";
    }
    else
    {
        cout << "Queue is not empty";
    }
    cout<<endl;
    pq1.PrintQueue();
    cout<<endl;
    int x;
    pq1.Dequeue(x);
    cout << x;
    cout<<endl;
    pq1.Dequeue(x);
    cout << x;
    cout<<endl;
    pq1.PrintQueue();
    cout<<endl;
    pq1.Dequeue(x);
    pq1.Dequeue(x);
    pq1.Dequeue(x);
    pq1.PrintQueue();
}
