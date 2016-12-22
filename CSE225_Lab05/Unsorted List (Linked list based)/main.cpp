#include <iostream>
#include "unsortedtype.h"
#include "unsortedtype.cpp"
using namespace std;

int main()
{
    UnsortedType<int> x;

    x.InsertItem(5);
    x.InsertItem(7);
    x.InsertItem(6);
    x.InsertItem(9);

    x.PrintTheList();
    cout << endl;

    cout << x.LengthIs() << endl;

    x.InsertItem(1);
    x.PrintTheList();
    cout << endl;

    int a1 = 4;
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

    int a3 = 9;
    x.RetrieveItem(a3, b);
    if(b)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

    int a4 = 10;
    x.RetrieveItem(a4, b);
    if(b)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

    if(x.IsFull())
        cout << "List is Full" << endl;
    else
        cout << "List is not Full" << endl;

    int  item1 = 5, item2 = 1, item3 = 6;
    x.DeleteItem(item1);

    if(x.IsFull())
        cout << "List is Full" << endl;
    else
        cout << "List is not Full" << endl;

    x.DeleteItem(item2);
    x.PrintTheList();
    cout << endl;

    x.DeleteItem(item3);
    x.PrintTheList();
    cout << endl;

    return 0;
}
