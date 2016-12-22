#include <iostream>
#include "sortedtype.h"

using namespace std;

int main()
{
    //task 01
    SortedType x;
    cout << x.LengthIs() << endl;

    ItemType a, b, c, d, e;
    a.Initialize(5);
    b.Initialize(7);
    c.Initialize(4);
    d.Initialize(2);
    e.Initialize(1);

    x.InsertItem(a);
    x.InsertItem(b);
    x.InsertItem(c);
    x.InsertItem(d);
    x.InsertItem(e);

    x.PrintTheList();
    cout << "\n" << endl;

    //task 02
    ItemType f;
    bool found;

    f.Initialize(6);

    x.RetrieveItem(f, found);
    if(found == true)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

    x.RetrieveItem(a, found);
    if(found == true)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

    if(x.IsFull() == true)
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl;

    cout << endl;

    //task 03
    x.DeleteItem(e);
    x.PrintTheList();

    cout << endl;
    if(x.IsFull() == true)
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl;

    return 0;
}
