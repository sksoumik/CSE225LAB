#include <iostream>
#include "sortedtype.h"
#include "sortedtype.cpp"
using namespace std;

int main()
{
    SortedType<int> x;

    cout << x.LengthIs() << endl;

    x.InsertItem(5);
    x.InsertItem(7);
    x.InsertItem(4);
    x.InsertItem(2);
    x.InsertItem(1);

    //cout << x.LengthIs() << endl;
    x.PrintTheList();
    cout << endl;

    int a1 = 6;
    bool b;
    x.RetrieveItem(a1, b);
    if(b)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

    int a2 = 5;
    x.RetrieveItem(a2, b);
    if(b)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

    if(x.IsFull())
        cout << "List is Full" << endl;
    else
        cout << "List is not Full" << endl;

    int item = 1;
    x.DeleteItem(item);
    x.PrintTheList();
    cout << endl;

    if(x.IsFull())
        cout << "List is Full" << endl;
    else
        cout << "List is not Full" << endl;

    cout << x.LengthIs() << endl;

    return 0;
}
